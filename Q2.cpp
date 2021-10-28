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



class CSStudent
//=====TO DO==================
//complete the definition for CSStudent
};



class SEStudent
//=====TO DO==================
//complete the definition for SEStudent

};

int main()
{
    //Student::ShowMajor();
    CSStudent CSA(25);
    CSA.ShowMajor();
    SEStudent SEB(22);
    SEB.ShowMajor();
}