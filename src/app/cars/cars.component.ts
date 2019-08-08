import { Component, OnInit } from '@angular/core';
import { HttpClientService, Car } from '../service/http-client.service';
import { Observable } from 'rxjs';
import { ActivatedRoute, Router } from '@angular/router';

//import {Car} from '../car';
@Component({
  selector: 'app-cars',
  templateUrl: './cars.component.html',
  styleUrls: ['./cars.component.css']
})
export class CarsComponent implements OnInit {

  Url = 'https://localhost:8080/cars';

  voit: Observable<Car[]> ;
  public cardata = [];

  constructor(
    private httpClientService: HttpClientService
  ) { }

  ngOnInit() {
    console.log("blabla2")
    this.httpClientService.getCars().subscribe((data) => {
         this.cardata = Array.from(Object.keys(data), k=>data[k]);
         console.log(this.cardata);

    
    
    

       console.log(Response)
                  }
    );
  }

  

  deleteCar(id) { console.log(id);
    this.httpClientService.deleteCar(id).subscribe(res => {
      alert("Car deleted successfully.");
      window.location.reload();
           
    });
  }

  
}
