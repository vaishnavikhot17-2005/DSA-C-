#include<iostream>
using namespace std;
class student{
public:
string* nameptr;
double* cgpaptr;


student(string name,double cgpa){
        
}
student(student &s){
    nameptr = new string;
    *nameptr = *s.nameptr;

    cgpaptr = new double;
    *cgpaptr = *s.cgpaptr;
}
void getstudentinfo(){
    cout<<"my name is "<<*nameptr<<endl;
    cout<<"my cgpa is "<<*cgpaptr<<endl;
}
};
int main(){
    student s1("payal",8.9);
    student s2(s1);
    *(s2.cgpaptr)=9.2;
    *(s2.nameptr)="tina";
    s1.getstudentinfo();
    s2.getstudentinfo();//shallow copy //
   return 0;
}
