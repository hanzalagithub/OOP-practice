#include <iostream>
#include <string>
using namespace std;

class student
{
// private:
//     /* data */
public:
    string name;
    double cgpa;
    student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main(){
    student s1("ahmed",3.2);
    s1.getInfo();
    return 0;
}