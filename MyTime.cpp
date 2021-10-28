#include "MyTime.h"
MyTime:: MyTime()
{}

//=====TO DO====(b)===============
MyTime:: MyTime(int hr, int mi){
    // complete the constructor function using the 
    // Initialization way.
    hour(hr), min(mi){

    }
}

//=====TO DO=====(e)=============
MyFile::MyTime operator+(const MyTime& b)
{
    // complete the operator overloading for +
    MyTime Mytime;
    Mytime.hour = this->hour + b.hour;
    Mytime.min = this->min + b.min;
    return Mytime; 
    
}


//=====TO DO=====(f)=============
MyFile::bool operator<(const MyTime&b){

if((this.hour)>(b.hour){
return true;
}
else if((this.hour)==(b.hour)){
    if(this.min)> (b.min)){
        return true;
    }
}
else return false;


    
    // complete the operator overloading for <
}
MyTime::~MyTime()
{
    std::cout<<"end of the object. Space Deleted.\n";
}
void MyTime::displayTime()
{
    std::cout<<"The time is: hour: "<<hour<<"   The min is:  "<<min<<".\n";
}
