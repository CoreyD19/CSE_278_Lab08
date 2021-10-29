#include<iostream>
#include "MyTime.h"
MyTime(){}

//=====TO DO====(b)===============
MyTime(int hour, int min){
    // complete the constructor function using the 
    // Initialization way.
    this->hour= hour; 
    this->min=min;
}

//=====TO DO=====(e)=============
// complete the operator overloading for +

/* MyTime::MyTime operator+(const MyTime& b)
{
    
    MyTime Mytime;
    Mytime.hour = this->hour + b.hour;
    Mytime.min = this->min + b.min;
    return Mytime; 
    
}


//=====TO DO=====(f)=============

// complete the operator overloading for <

MyTime::MyTime bool operator<(const MyTime&b){

if((this.hour)>(b.hour){
return true;
}
else if((this.hour)==(b.hour)){
    if(this.min)>(b.min)){
        return true;
    }
}
else return false;


    
} */
//MyTime::~MyTime()
//{
    //std::cout<<"end of the object. Space Deleted.\n";
//}
//displayTime()
//{
   // std::cout<<"The time is: hour: "<<hour<<"   The min is:  "<<min<<".\n";
//}