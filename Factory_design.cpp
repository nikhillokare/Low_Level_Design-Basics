#include <iostream>
using namespace std;
// this pattern is also called as virtual constructor

class Vehicle
{
public:
    virtual void createvehicle() = 0;
};
class Bike : public Vehicle
{
public:
    void createvehicle()
    {
        cout << "Creating Bike" << endl;
    }
};
class Car : public Vehicle
{
public:
    void createvehicle()
    {
        cout << "Creating Car" << endl;
    }
};
class Tempo : public Vehicle
{
public:
    void createvehicle()
    {
        cout << "Creting Tempo" << endl;
    }
};
class Vehiclefactory : public Vehicle
{

public:
    static Vehicle *getVehicle(string VehicleType)
    {
        Vehicle *obj;
        if (VehicleType == "Bike")
            obj = new Bike();
        else if (VehicleType == "Car")
            obj = new Car();
        else if (VehicleType == "Tempo")
            obj = new Tempo();
        return obj;
    }
};
int main()
{

    string VehicleType;
    cin >> VehicleType;
    Vehicle *obj = Vehiclefactory::getVehicle(VehicleType);
    obj->createvehicle();

    // string VehicleType;
    // cin >> VehicleType;
    // Vehicle *vobj;
    // if (VehicleType == "Bike")
    // {
    //     vobj = new Bike();
    // }
    // else if (VehicleType == "Car")
    // {
    //     vobj = new Car();
    // }
    // vobj->createvehicle();

    return 0;
}