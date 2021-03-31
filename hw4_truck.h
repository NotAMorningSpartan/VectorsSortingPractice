//Tyler Kness-Miller
//hw4_truck.h
class Truck: public Vehicle {
    private:
        string awd;
        int towing_capacity;
    public:
        //Getter/Setter - AWD
        void setAwd(string a) {
            awd = a;
        }
        string getAwd(){
            return awd;
        }

        //Getter/Setter - Towing Capacity
        void setTowing_capacity(int a){
            if (a > 0) {
                towing_capacity = a;
            }
            else{
                towing_capacity = 0;
            }
        }
        int getTowing_capacity(){
            return towing_capacity;
        }
    public:
        Truck(string awdrive, int towing, int yr, int mile, double val, string manu, string modl, int valuedate = 2021.25) {
            setAwd(awdrive);
            setTowing_capacity(towing);
            setYear(yr);
            setMiles(mile);
            setValue(val);
            setManufacturer(manu);
            setModel(modl);
            setValueDate(valuedate);
        }
        Truck(){
            setAwd("4x4");
            setTowing_capacity(5000);
            setYear(2015);
            setMiles(60000);
            setValue(20000);
            setManufacturer("Chevrolet");
            setModel("Colorado");
        }
};