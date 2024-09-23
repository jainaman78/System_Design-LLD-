#include<bits/stdc++.h>
using namespace std;

/*
    Solution: if i made a factoryclass that takes vehicle type argument and return the type of vehicle objects 
    then our user no need to know our backend :)
*/

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


class factory{
    public:
    static Vehicle* getvehicle(string vehicletype){//static becoz we dont need to create a object for factory and we can call its func diretly 
        Vehicle* vehicle;
        if(vehicletype=="car"){
            vehicle=new car();
        }
        else if(vehicletype=="bike"){
            vehicle=new Bike();
        }
        return vehicle;

    }
};
int main(){
    string st;
    cin>>st;
    Vehicle* vehicle=factory::getvehicle(st);
    vehicle->createvehicle();
    return 0;
}

