import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { HttpHeaders } from '@angular/common/http';
import { Observable, of, throwError } from 'rxjs';




const httpOptions = {
  headers: new HttpHeaders({
    'Content-Type':  'application/json'
  })
};


export class Car{
  static id: string;
  constructor(
    public id :string,
    public modelName :string,
    public brand :string,
    public engineCapacity :number,
    public fuel :string,
    public noOfSeats :number,
    public colour :string,
    public year :string,
    public kmsDriven :number,
  ) {}
}


@Injectable({
  providedIn: 'root'
})
export class HttpClientService {

  constructor(
    private httpClient:HttpClient
  ) {
  }
  getCars()
  {
    console.log("test call");
    return this.httpClient.get
    ('http://localhost:8080/cars');
  }
  baseUrl = 'http://localhost:8080/cars';
  
  
  getCar(id)
  {
    console.log("test call");
    return this.httpClient.get
    (`${this.baseUrl}/put/${id}`);
  }

  // baseUrl = 'http://localhost:8080/cars';

  deleteCar(id) {
  return this
            .httpClient
            .delete(`${this.baseUrl}/${id}`);
  }




  
  addcar (v : Car): Observable<Car>{
    console.log(v);
    
    return this
              .httpClient
              .post<Car>(`${this.baseUrl}/post`, v)
  }


  updatecar(id , Car): Observable<any> {
    
    return this
              .httpClient
              .put(`${this.baseUrl}/${id}`, Car);
  }
    
  



  
  private handleError<T> (operation = 'operation', result?: T) {
    return (error: any): Observable<T> => {
  
      // TODO: send the error to remote logging infrastructure
      console.error(error); // log to console instead
  
      // Let the app keep running by returning an empty result.
      return of(result as T);
    };
  }
}
