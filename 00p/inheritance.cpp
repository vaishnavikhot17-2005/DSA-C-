
//Inheritance is a concept of OOP (Object-Oriented Programming) where one class (child/derived class) acquires the properties and behavior of another class (parent/base class).
//In simple words:
//“Reuse code from one class into another class.”
//there are 3 types of access specifiers private, public,protected=>(If you want child classes to use parent data directly, use protected.)// 
#include<iostream>
using namespace  std;
class human{
    public:
    string name;
    int age;
    //human(string name,int age){
     //   this->name=name;
      //  this->age=age;
human(){
cout<<"i am base class"<<endl;
}
};
//syntax for inheritance:
 // inheritance: first base class constructor will get called and then derived class constructor //
class person:public human{
    public:
    string gendar;
person(){
cout<<"i am derived class"<<endl;
}

    void getinfo(){
        //this is inheritance//
        cout<<"my name is "<<name<<endl;
        cout<<"my age is "<<age<<endl;
        cout<<"my gendr is "<<gendar<<endl;
    
    }
    };


int main(){
    person p1;
    p1.name="tina";
    p1.age=21;
    p1.gendar="female";
    p1.getinfo();

}