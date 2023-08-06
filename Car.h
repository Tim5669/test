#include <string>

class Car{
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
};