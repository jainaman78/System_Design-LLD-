// we have a vehicle class and some subclasses that inherit the properties...i want to call a createvehicle fucn for all

#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    virtual void createvehicle()=0;//it means that evry subclass should implement this func

};

class car:public Vehicle{
    public:
    void createvehicle(){
        cout<<"Car created";
    }
};
class Bike:public Vehicle{
    public:
    void createvehicle(){
        cout<<"Bike created";
    }
};



int main(){
    string st;
    cin>>st;
    Vehicle* vehicle;
    if(st=="car"){
        vehicle=new car();
    }
    else if(st=="bike"){
        vehicle=new Bike();
    }

    vehicle->createvehicle();
    return 0;
}


/*

Problem: if user wants to change or add a vehicle called tempo then he/she needs to change the main func with more if else conditon
as well as a classes.

*/