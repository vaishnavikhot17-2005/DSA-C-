#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    //this is constructor
   person(string name,int age){
this->name=name;
this->age=age;
    }

    person(){
        cout<<"i am base class constructor"<<endl;
    }
    //destructor: in destructor first derived class constrctor get called and then base class constructor get call //
    ~person(){
        cout<<"delete person datails"<<endl;
    }
};
class student:public person{
    public:
    int roll;
    //explicitiely calling parent class//
    student(string name,int age,int roll)
   :person(name,age)
{ this->roll=roll;
    }

    student(){
        cout<<"i am derived class constructor"<<endl;
    }
    void getinfo(){
        cout<<"my name "<<name<<endl;
        cout<<"my age "<<age<<endl;
        cout<<"my roll number is "<<roll<<endl;
    }
    
};
int main(){
    student s1("tina",21,47);
   s1.getinfo();
    person p1;

}