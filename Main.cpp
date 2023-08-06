#include <iostream>
#include <string>
#include "Car.h"

/*class Car{
    private:   
        std::string make;
        std::string model;
        int door_count;
    public:
        Car(){
            make = "NULL";
            model = "NULL";
            door_count = 0;
        };
        Car(std::string x, std::string y, int z){
            make = x;
            model = y;
            door_count = z;
        }        
        std::string getMake(){
            return make;
        }
        std::string getModel(){
            return model;
        }
        int getNumDoors(){
            return door_count;
        }
};*/

int main(){
    std::string make, model;
    int num_doors;
    std::cout << "Make of car: "; std::cin >> make; std::cout << "\n";
    std::cout << "Model of car: "; std::cin >> model; std::cout << "\n";
    std::cout << "Number of doors: "; std::cin >> num_doors; std::cout << "\n";
    Car my_car(make, model, num_doors);
    std::string brand = my_car.getMake(); std::cout << brand + "\n";
    return 0;
}