#include<bits/stdc++.h>
using namespace std;
//private public protected(👉 You cannot access protected directly in main(),
//but you CAN access it using getter() and setter() functions.)
class Teacher{
    private:
    int salary;
public:
    string name;
    string dept;
    

void newdept(string newdept){
    dept=newdept;
}
void setsalary(int s){
    salary=s;//if u declear salary here it will create local variable which will be differnt from class data member To modify the class data member, it must be declared inside the class scope.

};
  int  getslary(){
    return salary;
};
};
int main(){

Teacher t1;
t1.name="vaishanvi";
t1.dept="computer science engineering";
t1.setsalary(2500000);
cout<<t1.name;
cout<<t1.getslary();

return 0;
}
