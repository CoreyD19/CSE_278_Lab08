#include<iostream>
using namespace std;
class Student
{
    public:
        Student()
        {}
        Student(int ID)
        {
            this->ID=ID;
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



class CSStudent: public Student{
    public:
    
    CSStudent(){}
    CSStudent(int ID){
    this->ID=ID;
        }
        int getID()
        {
            return ID;
        }
        
    
    void ShowMajor()
        {
            cout<<"I am a student majoring Computer Science\n";
            cout<<"and my ID is: " <<ID<< endl;

        }


};



class SEStudent: public Student{
    public:
    
    SEStudent(){}
    SEStudent(int ID){
    this->ID=ID;
        }
        int getID()
        {
            return ID;
        }
        
    void ShowMajor()
        {
            cout<<"I am a student majoring Software Engineering\n";
            cout<<"and my ID is: " <<ID<< endl;

        }


};

int main()
{
    //Student::ShowMajor();
    CSStudent CSA(25);
    CSA.ShowMajor();
    SEStudent SEB(22);
    SEB.ShowMajor();
}
