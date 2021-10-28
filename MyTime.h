#include<iostream>

class MyTime
{
    public:
        MyTime();
        MyTime(int hr, int mi);
        ~MyTime();
        void displayTime();
    //operation overload for + (e)
    MyTime operator+(const MyTime& b);
    //operation overload for > (f)
    bool operator<(const MyTime& b);
    
        int hour;
        int min;
   
       
};