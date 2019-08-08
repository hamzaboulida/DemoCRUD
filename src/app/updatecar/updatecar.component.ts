import { Component, OnInit } from '@angular/core';
import { HttpClientService, Car } from '../service/http-client.service';
import { ActivatedRoute, Router } from '@angular/router';


@Component({
  selector: 'app-updatecar',
  templateUrl: './updatecar.component.html',
  styleUrls: ['./updatecar.component.css']
})
export class UpdatecarComponent implements OnInit {
  voiture = {};

  
  constructor(
    private httpClient: HttpClientService,
    private router: Router, 
    private route: ActivatedRoute,
  ) { }

  ngOnInit() {
    this.getCar(this.route.snapshot.params['id']);
    
      }
  getCar(id){
    this.httpClient.getCar(id).subscribe(data => {
      console.log(data);
      this.voiture = data;
    });



  }
 
  updatecar(id, voiture){
    this.httpClient.updatecar(id, voiture)
    .subscribe(res => {alert("Car Edited successfully.");
      let id = res['id'];
      this.router.navigate(['/cars/put/'+id, id]);
    }, (err) => {
      console.log(err);
      window.location.reload();
    }
    );
  }
}
