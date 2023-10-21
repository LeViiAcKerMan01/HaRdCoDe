#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name=aName;
        major=aMajor;
        gpa=aGpa;
    }
    bool hasHonors(){
        if(gpa>=6.0){
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    Student student1("Priyanshu", "Mechanical Engineering", 4.8);
    Student student2("Navneet", "Computer Science and Engineering", 9.8);
    cout<<student1.hasHonors();
    cout<<"\n";
    cout<<student2.hasHonors();
    return 0;

}