#include <iostream>
#include <string>
#include "Car.h"
#include <list>

void newCar(std::list<Car>& cars){
    std::string make, model;
    int num_doors;
    std::cout << "Make of car: "; getline(std::cin, make); std::cout << "\n";
    std::cout << "Model of car: "; getline(std::cin, model); std::cout << "\n";
    std::cout << "Number of doors: "; std::cin >> num_doors; std::cout << "\n";
    Car my_car(make, model, num_doors);
    cars.push_back(my_car);
}

Car getCar(std::list<Car>& cars, int k){
    std::list<Car>::iterator it = cars.begin();
    for(int i = 0; i < k; i++){
        ++it;
    }
    return *it;
}

int main(){
  std::list<Car> cars;
  std::cout << "Enter \"add car\" to make a new entry, enter \"make\", \"model\", or \"number of doors\" to view information. To see info on all cars enter \"show all cars\".\nEnter \"end\" to stop the program. \n";
  std::string input;
  std::cout << "> ";
  while(true){
    try{
        getline(std::cin, input);
        if(input == "end"){
            return 0;
            continue;
        }
        else if(input == "add car"){
            newCar(cars);
            std::cout << "> ";
            continue;
        }
        else if(input == "make"){
            int car_num;
            try{
                std::cout << "Number of car: "; std::cin >> car_num;
                car_num--;
                std::cout << (getCar(cars, car_num)).getMake() << "\n";
                std::cout << "> ";
                continue;
            }
            catch(...){
                std::cout << "not a valid number.\n";
                std::cout << "> ";
                continue;
            }
        }
        else if(input == "model"){
            int car_num;
            try{
                std::cout << "Number of car: "; std::cin >> car_num;
                car_num--;
                std::cout << (getCar(cars, car_num)).getModel() << "\n";
                std::cout << "> ";
                continue;
            }
            catch(...){
                std::cout << "not a valid number.\n";
                std::cout << "> ";
                continue;
            }      
        }
        else if(input == "number of doors"){
            int car_num;
            try{
                std::cout << "Number of car: "; std::cin >> car_num;
                car_num--;
                std::cout << (getCar(cars, car_num)).getNumDoors() << "\n";
                std::cout << "> ";
                continue;
            }
            catch(...){
                std::cout << "not a valid number.\n";
                std::cout << "> ";
                continue;
            }      
        }
        else if(input == "show all cars"){
            for(int i = 0; i < cars.size(); i++){
                int k = i + 1;
                std::cout << "car " << k << ":  ";
                std::cout << (getCar(cars, i).getMake()) << " | " << (getCar(cars, i).getModel()) << " | " << (getCar(cars, i).getNumDoors()) << "doors" << "\n";
                std::cout << "_______________________________________\n";
            }
            std::cout << "> ";
            continue;
        }
    }
    catch(...){
        std::cout << "Enter a valid input.\n";
        continue;        
    }
  }
  return 0;
}