//Tyler Kness-Miller
//HW6

using namespace std;
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "hw4_truck.h"

//Sources
//https://www.cars.com/vehicledetail/detail/839607858/overview/
//https://www.cars.com/vehicledetail/detail/840027326/overview/
//https://www.cars.com/vehicledetail/detail/841352374/overview/
//https://www.cars.com/vehicledetail/detail/839793671/overview/
//https://www.cars.com/vehicledetail/detail/840724755/overview/

//A Note on the Directions:
//When it asks to use the ternary if operator in the getName() truck method, I do not use this, as I fill the value no matter what, and include values such as RWD, 4WD, etc.

int main(){
    vector<Truck> vec;
    vec.push_back(Truck("4WD",9600,2011,98700,22995,"Ford","F-350 XL",2021.1));
    vec.push_back(Truck("4WD",7000,2018,18866,31995,"Ford","F-150 XLT",2021.1));
    vec.push_back(Truck("RWD",7000,2019,23777,25100,"Ford","F-150 XLT",2021.1));
    vec.push_back(Truck("RWD",3000,2007,74437,8866,"Ford","Ranger STX",2021.1));
    vec.push_back(Truck("RWD",10000,2012,31875,21490,"Chevrolet","Silverado 2500",2021.1));

    for(int i = 0; i < vec.size(); i++){
        vec[i].updateValue(2021.33);
    }
    vec.push_back(Truck("4WD",9000,2004,210248,22995,"GMC","Sierra 2500 Heavy Duty",2021.33));
    vec.push_back(Truck("4WD",8500,2018,32715,44500,"GMC","Sierra 1500 SLT",2021.33));
    vec.push_back(Truck("4WD",9000,2018,29569,49470,"GMC","Sierra 1500 Denali",2021.33));
    vec.push_back(Truck("4WD",8000,2017,12394,39808,"Ram","1500 Laramie",2021.33));
    vec.push_back(Truck("4WD",9000,2018,91341,43600,"GMC","Sierra 1500 Denali",2021.33));

    float valueNow = accumulate(vec.begin(), vec.end(), 0.0, [](double i, Truck& b){
        return i + b.getValue();
    });
    cout << "Current Value of all Trucks: " << to_string(valueNow) << endl;

    float valueFive = accumulate(vec.begin(), vec.end(), 0.0, [](double i, Truck& b){
        return i + b.estimateValue(2026.33);
    });
    cout << "Current Value of all Trucks in five years: " << to_string(valueFive) << endl;
    cout << "This number is reduced as with our current model, the value of each truck is reduced by 15 percent with every year that passes." << endl;

    cout << endl << "Trucks sorted alphabetically:" << endl;
    //Sort by name alphabetically
    auto sortAlpha = [](Truck& a, Truck& b) -> bool{
        return a.getName() > b.getName();
    };
    sort(vec.begin(), vec.end(), sortAlpha);
    for(int i = 0; i < vec.size(); i++){
        vec[i].printTruck();
    }
    cout << endl << "Trucks sorted by mileage:" << endl;
    //Sort by Mileage
    auto sortMileage = [](Truck& a, Truck& b) -> bool{
        return a.getMiles() > b.getMiles();
    };
    sort(vec.begin(), vec.end(), sortMileage);
    for(int i = 0; i < vec.size(); i++){
        vec[i].printTruck();
    }

    return 0;
}