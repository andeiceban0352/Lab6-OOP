#pragma once
#include "person.h"
using namespace std;

class Customer:public Person
{
public:
    string customers[30] = {"Tom", "Iulius", "Andrei","Dany","Noah","Amelia","Oliver","Olivia","GeorgeIsla","Leo","Ava","Theo","Freya","Arthur","Mia","Freddie","Willow","Harry","Evie","Charliem","Lilly", "Jack", "Grace" };
    void get_in_the_car(int val) override
    {
        cout << customers[val] <<  " get in the car" << " .";
    }

    void get_out_from_car() override
    {
        cout << " Customer get out from the car" << endl;
        cout << "\n";
    }

    void pay_for_ride()override
    {
        cout << " Customer pay for the ride" << " .";
    }

    float leave_rating(){
        return (rand() % 3) + 3;
    }
};

