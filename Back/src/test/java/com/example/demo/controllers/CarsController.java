package com.example.demo.controllers;

import com.example.demo.models.Cars;
import com.example.demo.repositories.CarsRepository;
import org.bson.types.ObjectId;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import javax.validation.Valid;
import java.util.List;
import java.util.Optional;


@CrossOrigin( origins = "http://localhost:4200" )
@RestController
@RequestMapping(value = "/cars")
public class CarsController {

    @Autowired
    private CarsRepository repository;


    @RequestMapping(value = "", method = RequestMethod.GET)
    public List<Cars> getAllCars() {
        return repository.findAll();
    }


    @RequestMapping(value = "/put/{id}", method = RequestMethod.GET)
    public Cars getCarById(@PathVariable("id") String id) {
    	Optional<Cars> optional = repository.findById(id);
    	Cars cars = new Cars();
    	if (optional.isPresent()) {
    		cars = optional.get();
    	}else {
    		return null;
    	}
        return cars;
    }

    @RequestMapping(value = "/{id}", method = RequestMethod.PUT)
    public void updateCarById(@PathVariable("id") ObjectId id, @Valid @RequestBody Cars car) {
        car.setId(id.toString());
        repository.save(car);
    }

    @RequestMapping(value = "/post", method = RequestMethod.POST)
    public Cars addNewCar(@RequestBody Cars car) {
    	System.err.println("yes it works!");
        car.setId(ObjectId.get().toString());
        repository.save(car);
        return car;
    }
  
    @RequestMapping(value = "/{id}", method = RequestMethod.DELETE)
    public ResponseEntity<Object> deleteCarByID(@PathVariable("id") String id) {
        return repository.findById(id)
              .map(cars -> {
              repository.deleteById(id);
              return ResponseEntity.ok().build();
              }).orElse(ResponseEntity.notFound().build());
        }    
    
}