#pragma once
#include "iostream"
#include "person.h"
using namespace std;

class Driver:Person
{
public:
    string drivers[5] = {"Tom", "Andrew", "Gimmy", "Tanner", "Bill"};
    float rating;

    string get_the_command(int n){
        cout << drivers[n] << " get the command" << " .";
        string xc = drivers[n];
        return xc;
    }

    void drive() override
    {
    	cout << " Drive the car" << " .";
    }
    
    void arrive() override
    {
    	cout << " Arrived at the destination" << " .";
    }

    void wait_customer() override
    {
        cout << " Waiting the customer" << " .";
    }

    void get_money_from_customer() override
    {
        cout << " Driver gets the money from the customer" << " .";
    }

};

