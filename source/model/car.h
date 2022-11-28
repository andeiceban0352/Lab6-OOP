#include "iostream"
#include "string"
#include <string>
#include <cstdlib>
using namespace std;

class Car
{
public:
    string model[5] = {"Porche", "Audi", "Bmw", "Toyota", "Renault"};
    float fuel_premium;
    float fuel_standard;

    void start_engine(int val){
        cout << " Start the engine of " << model[val] << ".";
    }

    void stop_engine(){
        cout << " Stop the engine" << ".";
    }
};

