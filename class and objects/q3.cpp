#include <iostream>

using namespace std;

class Student
{
public:
    string firstname;
    string lastname;
    string studentid;
    int age;
    float height;
    string course;
    Student(string _firstname, string _lastname, string _studentid, int _age, float _height, string _course)
    {
        firstname = _firstname;
        lastname = _lastname;
        studentid = _studentid;
        age = _age;
        height = _height;
        course = _course;
   
};
     void display() 
        {
        cout << firstname << " " << lastname << ", " 
             << age << " years old, ID: " << studentid 
             << ", Height: " << height << ", Course: " << course << endl;}
    };


int main()
{
    Student saugat("Saugat", "Ojha", "52jefe", 20, 5.8, "BSCS");
    saugat.display();
    return 0;
}
