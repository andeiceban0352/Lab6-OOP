#pragma once
#include "iostream"
using namespace std;

class Person
{
public:
    string name;
    int age;

    virtual void get_the_request(){
        //
    }

    virtual void assign_request_to_drivers(){
        //
    }

    virtual void drive()
    {
    	//
    }

    virtual void arrive()
    {
    	//
    }

    virtual void wait_customer(){
        //
    }

    virtual void get_money_from_customer(){
        //
    }

    virtual void get_in_the_car(int val){
        //
    }

    virtual void get_out_from_car(){
        //
    }

    virtual void pay_for_ride(){
        //
    }
};

