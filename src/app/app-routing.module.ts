import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { CarsComponent } from './cars/cars.component';

import { AddCarComponent } from './add-car/add-car.component';
import { UpdatecarComponent } from './updatecar/updatecar.component';


const routes: Routes = [
  {path: 'cars', component: CarsComponent},
  {path: '', component: CarsComponent},
  
  
  {path: 'AddtCar', component: AddCarComponent},
  {path: 'updatecar/:id', component: UpdatecarComponent},
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
