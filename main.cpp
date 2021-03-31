//Tyler Kness-Miller
//HW6

using namespace std;
#include <iostream>
#include <vector>
#include "hw4_truck.h"

//Sources
//https://www.cars.com/vehicledetail/detail/839607858/overview/
//https://www.cars.com/vehicledetail/detail/840027326/overview/
//https://www.cars.com/vehicledetail/detail/841352374/overview/
//https://www.cars.com/vehicledetail/detail/839793671/overview/
//https://www.cars.com/vehicledetail/detail/840724755/overview/

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


}