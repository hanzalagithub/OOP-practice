#include <iostream>
#include <string>
using namespace std;

class student
{
// private:
//     /* data */
public:
    string name;
    double* cgpaPtr;
    student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    student(student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};
int main(){
    student s1("ahmed",3.2);
    
    student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr)= 4;
    s1.getInfo();
    s2.name="hanzala";
    
    s2.getInfo();
    
    return 0;
}