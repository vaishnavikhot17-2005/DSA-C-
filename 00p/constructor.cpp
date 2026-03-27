#include<bits/stdc++.h>
using namespace std;
class student{
private:
double salary;
public:
//constructor overloading: we can have many constructor in one class with same name but paremeters should be diff//
//non paramiterized
student(){//this is constructor
    dept="start the class";//constructor fuction and it will be always public cause from main ()function constructor get called so to main () function there is no access for private data members 
}
//parameterized
student(string name , string dept, string subject,double salary){
    this->name=name; 
    this->dept=dept;
    this->subject=subject;
    this->salary=salary;
}
void getinfo(){
    cout<<"my subject is "<<subject<<endl;
    cout<<"my name is "<<name<<endl;
    cout<<"my salary is "<<salary<<endl;
}
void getstudent(){
    cout<<"student name is "<<studentname<<endl;
    cout<<"my cgpa is "<<cgpa<<endl;
}
//copy constructor//
//A copy constructor is a special constructor used to create a new object as a copy of an existing object.//
student(student &oronj){
    this->name=oronj.name;
    this->dept=oronj.dept;
    this->subject=oronj.subject;

}
//cpoy constructor for student //
student(student &s)//pass by reference//
{
    cout<<"i am custom copy constructor"<<endl;
this->studentname=s.studentname;
this->cgpa=s.cgpa;
}
student(double cgpa,string s){
    this->cgpa=cgpa;
    this->studentname=s;
}
string dept;
string name;
string subject;
string studentname;
double cgpa;

};

int main(){
    //student s1;
    //cout<<s1.dept;
    student s1("tina","computer science","maths",56000);
    s1.getinfo();
    //pointer
    string word="A";
    string *ptr=&word;
    string **ptr2=&ptr;//pointer to pointer
    cout<<ptr2;
    cout<<*(&word);
    cout<<*ptr;
    //copy constructor//
    //student s2(s1);
   // s2.getinfo();
  student s2(s1);
  s2.getstudent();

    
    return 0;
}