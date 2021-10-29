#include<iostream>

class MyTime
{
    public:
        MyTime(){}
        MyTime(int hour, int min){
            this->hour = hour;
            this->min = min;
        }
        void displayTime()
{
    std::cout<<"The time is: hour: "<<hour<<"   The min is:  "<<min<<".\n";
}
    //operation overload for + (e)
   // MyTime operator+(const MyTime& b);
    //operation overload for > (f)
   // MyTime bool operator<(const MyTime& b);
    
        int hour;
        int min;
   
       
};