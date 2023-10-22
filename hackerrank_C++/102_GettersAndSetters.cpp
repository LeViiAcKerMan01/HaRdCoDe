#include<iostream>
#include<sstream>
using namespace std;
class Student{
    private:
    int age;
    string firstname;
    string lastname;
    int standard;
    public:
    void set_age(int aAge){
        age=aAge;
    }
    int get_age(){
        return age;
    }
    void set_first_name(string first_name){
        firstname=first_name;
    }
    string get_first_name(){
        return firstname;
    }
    void set_last_name(string last_name){
        lastname=last_name;
    }
    string get_last_name(){
        return lastname;
    }
    void set_standard(int aStandard){
        standard=aStandard;
    }
    int get_standard(){
        return standard;
    }
    string to_string(){
        stringstream ss;
        ss<<age<<","<<lastname<<","<<firstname<<","<<standard;
        return ss.str();
    }
   

};
int main(){
    Student st1;
    st1.set_age(19);
    st1.set_first_name("Priyanshu");
    st1.set_last_name("Tadhiyal");
    st1.set_standard(12);
    cout<<st1.get_age();
    cout<<"\n";
    cout<<st1.get_first_name();
    cout<<"\n";
    cout<<st1.get_last_name();
    cout<<"\n";
    cout<<st1.get_standard();
    cout<<"\n"<<"\n";
    cout<<st1.to_string();
    
    return 0;
}