#include <iostream>
using namespace std;
class Car
{
public:
    string color;
    float remainingfuel;
    string fueltype;
    int mileage;
    string cartype;
    float enginepower;
    string model;
    float weight;
    int topspeed;

    Car(string _color, float _remainingfuel, string _fueltype, int _mileage, string _cartype, float _enginepower, string _model, float _weight, int _topspeed)
    {
        color = _color;
        remainingfuel = _remainingfuel;
        fueltype = _fueltype;
        mileage = _mileage;
        cartype = _cartype;
        enginepower = _enginepower;
        model = _model;
        weight = _weight;
        topspeed = _topspeed;
    };
    void addfuel(int fuel)
    {
        remainingfuel += fuel;
    }
    void checkfuel(){
        cout << "the remaining fuel is : " << remainingfuel << "liters" << endl;
    }
};

int main()
{
    Car car1("red", 43, "petrol", 42, "sports", 34.23, "fj23", 24, 89);
    car1.checkfuel();
    car1.addfuel(5);
    car1.checkfuel();
   
}
