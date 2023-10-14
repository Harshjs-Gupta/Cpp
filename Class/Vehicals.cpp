/*We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price.
Create its two subclasses *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and
fuel tank size(in inches) Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses
Bajaj and TVS, each having a data member to store the make-type. Now, store and print the information of an Audi and a Ford car
(i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    int mileage;
    int price;

public:
    Vehicle(int mileage = 0, int price = 0) : mileage(mileage), price(price) {}
};
class Car : public Vehicle
{
public:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;

    Car(int ownership_cost = 0, int warrenty = 0, int seating_capacity = 0, string fuel_type = " ")
        : ownership_cost(ownership_cost), warranty(warranty), seating_capacity(seating_capacity), fuel_type(fuel_type) {}
};
class Audi : public Car
{
public:
    string model_type;

    Audi(string model_type = " ", int ownership_cost = 0, int warranty = 0, int seating_capacity = 0, string fuel_type = " ", int mileage = 0, int price = 0)
        : Car(ownership_cost, warranty, seating_capacity, fuel_type), model_type(model_type) {}

    void printinfo()
    {
        cout << "Information fo Audi: ";
        cout << "Model: " << model_type << "\n"
             << "Ownership cost: " << ownership_cost << "\n"
             << "Warrenty: " << warranty << "\n";
        cout << "Seating capacity: " << seating_capacity << "\n"
             << "Fuel type: " << fuel_type << "\n"
             << "Mileage: " << mileage << "\n"
             << "Price: " << price << endl;
    }
};
class Ford : public Car
{
public:
    string model_type;

    Ford(string model_type = " ", int ownership_cost = 0, int warranty = 0, int seating_capacity = 0, string fuel_type = " ", int mileage = 0, int price = 0)
        : Car(ownership_cost, warranty, seating_capacity, fuel_type), model_type(model_type) {}

    void printinfo()
    {
        cout << "Information fo Ford: ";
        cout << "Model: " << model_type << "\n"
             << "Ownership cost: " << ownership_cost << "\n"
             << "Warrenty: " << warranty << "\n";
        cout << "Seating capacity: " << seating_capacity << "\n"
             << "Fuel type: " << fuel_type << "\n"
             << "Mileage: " << mileage << "\n"
             << "Price: " << price << endl;
    }
};
class Bike : public Vehicle
{
public:
    int no_cylinder;
    int no_gear;
    string cooling_type;
    string wheel_type;
    int fueltank_size;

    Bike(int no_cylinder = 0, int no_gear = 0, string cooling_type = " ", string wheel_type = " ", int fuletank_size = 0)
        : no_cylinder(no_cylinder), no_gear(no_gear), cooling_type(cooling_type), wheel_type(wheel_type), fueltank_size(fueltank_size) {}
};
class Bajaj : public Bike
{
public:
    string make_type;
    Bajaj(string make_type = " ", int no_cylinder = 0, int no_gear = 0, string cooling_type = " ", string wheel_type = " ", int fuletank_size = 0, int mileage = 0, int price = 0)
        : Bike(no_cylinder, no_gear, cooling_type, wheel_type, fueltank_size), make_type(make_type) {}

    void printinfo()
    {
        cout << "Information of Bajaj bike: ";
        cout << "Make type: " << make_type << "\n"
             << "Noumber of cylinder: " << no_cylinder << "\n"
             << "Number of gear: " << no_gear << "\n";
        cout << "Cooling type: " << cooling_type << "\n"
             << "Wheel type: " << wheel_type << "\n"
             << "Fule tank size: " << fueltank_size << "\n";
        cout << "Mileage: " << mileage << "\n"
             << "Price: " << price << endl;
    }
};
class TVS : public Bike
{
public:
    string make_type;

    TVS(string make_type = " ", int no_cylinder = 0, int no_gear = 0, string cooling_type = " ", string wheel_type = " ", int fuletank_size = 0, int mileage = 0, int price = 0)
        : Bike(no_cylinder, no_gear, cooling_type, wheel_type, fueltank_size), make_type(make_type) {}

    void printinfo()
    {
        cout << "Information of Bajaj bike: ";
        cout << "Make type: " << make_type << "\n"
             << "Noumber of cylinder: " << no_cylinder << "\n"
             << "Number of gear: " << no_gear << "\n";
        cout << "Cooling type: " << cooling_type << "\n"
             << "Wheel type: " << wheel_type << "\n"
             << "Fule tank size: " << fueltank_size << "\n";
        cout << "Mileage: " << mileage << "\n"
             << "Price: " << price << endl;
    }
};
int main()
{

    Audi audi("Porshe", 1000, 5, 2, "Petrol", 9, 10000000);
    Ford ford("Mustang", 950, 5, 4, "Petrol", 10, 10000000);
    Bajaj bajaj("Pulser", 1, 4, "Air", "Spokes", 15, 20, 70000);
    TVS tvs("Ninja H2R", 4, 6, "Liquid", "Alloys", 25, 14, 200000);

    audi.printinfo();
    cout << "\n";
    ford.printinfo();
    cout << "\n";
    bajaj.printinfo();
    cout << "\n";
    tvs.printinfo();
    cout << "\n";

    return 0;
}
