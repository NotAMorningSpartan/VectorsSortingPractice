//Tyler Kness-Miller
//hw4_vehicle.h
#include<string>
using namespace std;
class Vehicle {
    private:
        //Private Variables
        int year;
        int miles;
        double value;
        float value_date = 2020.25;
        string model;
        string manufacturer;
    public:
        //Member method - Update Vehicle Value
        void updateValue(float a) {
            //Assume 2021.34 is the current date, as we are almost at the beginning of March.
            int b = a - value_date;
            for (int i = 0; i < b; i++){
                value = value * 0.85;
            }
            value_date = a;
        }

        void setValueDate(float a){
            value_date = a;
        }
        float getValueDate(){
            return value_date;
        }

        //Member method - Estimate Vehicle Value
        float estimateValue(float a){
            float val = value;
            int b = a - 2021.34;
            for (int i = 0; i < b; i++){
                val = val * 0.85;
            }
            return val;
        }

        //Getter/Setter - Year
        void setYear(int a){
            if(a > 0) {
                year = a;
            }
            else {
                year = 0;
            }
        }
        int getYear() {
            return year;
        }

        //Getter/Setter - Miles
        void setMiles(int a){
            if(a > 0) {
                miles = a;
            }
            else{
                miles = 0;
            }
        }
        int getMiles(){
            return miles;
        }

        //Getter/Setter - Value
        void setValue(double a){
            if (a > 0){
                value = a;
            }
            else{
                value = 0;
            }
        }
        double getValue(){
            return value;
        }

        //Getter/Setter - Manufacturer
        void setManufacturer(string a) {
            manufacturer = a;
        }
        string getManufacturer(){
            return manufacturer;
        }

        //Getter/Setter - Model
        void setModel(string a){
            model = a;
        }
        string getModel(){
            return model;
        }

        //Constructor
        Vehicle(string manu, string modl, double val, int yr, int mile, float valdat){
            setManufacturer(manu);
            setModel(modl);
            setValue(val);
            setYear(yr);
            setMiles(mile);
            if (valdat != 0){
                //Zero means nothing was set. Leave the value to its default.
                value_date = valdat;
            }
        }
        //Default Constructor
        Vehicle(){
            setManufacturer("Chevrolet");
            setModel("Colorado");
            setValue(20000);
            setYear(2015);
            setMiles(60000);
    }
};