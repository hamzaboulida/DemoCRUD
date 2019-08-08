import { Component, OnInit } from '@angular/core';
import { HttpClientService, Car } from '../service/http-client.service';


@Component({
  selector: 'app-add-car',
  templateUrl: './add-car.component.html',
  styleUrls: ['./add-car.component.css']
})
export class AddCarComponent implements OnInit {

  
  user: Car = new Car("","","",0,"",0,"","",0) ;

  constructor(
    private httpClient: HttpClientService,
  ) {}

  ngOnInit() {
    
  }
  addcar(){
    console.log(this.user)    
    this.httpClient.addcar(this.user)
          .subscribe( (data) => {
            console.log(data)
            alert("Car created successfully.");
          });
         
             
        
  };
}