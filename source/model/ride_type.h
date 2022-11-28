#pragma once
#include "iostream"
#include "ride_type.h"

using namespace std;

class Ride_Type
{
public:

    float start_ride;
    float cost_per_km;
    float cost_per_min;
    float price;
    float time;
    float ride_price = 0;

    float ride_price_prem(int distance) {
        start_ride = 40;
        cost_per_km = 10.5;
        cost_per_min = 1; 
        time = distance * 1.3;
        price = start_ride + (cost_per_km * distance) + (cost_per_min * time);
        return price;
    }

    float ride_price_stnd(int distance) {
        start_ride = 29;
        cost_per_km = 5.5;
        cost_per_min = 0.38;
        time = distance * 1.1;
        price = start_ride + (cost_per_km * distance) + (cost_per_min * time);
        return price;
    }

    void ride_premium(){
        cout << " The ride is premium" << endl;
    }

    void ride_standart(){
        cout << " The ride is standart" << endl;
    }
};


