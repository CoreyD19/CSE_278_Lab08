#include<iostream>
using namespace std;
class Student
{
    public:
        Student(){}
        Student(int newID)
        {
    ID = newID;
        }
        int getID()
        {
            return ID;
        }
        void ShowMajor()
        {
            cout<<"I am a student in Miami University\n";
        }
    protected:
        int ID;
};

class RA
{
    public:
        RA(){}
        RA(int NewSalary)
        {
            Salary=NewSalary;
        }
        int getSalary()
        {
            return Salary;
        }
        void ShowYourWork()
        {
            cout<<"I am a RA in Miami University\n";
        }
    protected:
        int Salary;
};

class AboutMe: public Student, public RA {
public:
        AboutMe(){}
        AboutMe(int newID, int newSalary):ID(newID), Salary(newSalary){}
        void setMyID(int newID){
            ID = newID;
        }
        int getID()
        {
            return ID;
        }
        void ShowMajor()
        {
            cout<<"I am a student in Miami University\n";
        }
        
        void setSalary(int newSalary){
            Salary = newSalary;
        }
        void DisplayInfo() {
            cout<<"My ID in Miami is: "<<ID<<"\n";
            cout<<"My salary as an RA is: "<<Salary<<"\n";
        }
    protected:
        int ID;
        int Salary;
};

int main()
{
    AboutMe Alice(22,223);
    Alice.ShowMajor();
    Alice.ShowYourWork();
    Alice.setMyID(1273);
    Alice.setSalary(2000);
    Alice.DisplayInfo();
}
