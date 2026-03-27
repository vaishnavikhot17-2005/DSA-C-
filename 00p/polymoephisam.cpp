//Polymorphism = “Many Forms”
/*Compile-time	Before execution	Overloading
Run-time	During execution	Overriding*/

//It means one function or object behaves differently in different situations
//complie time polymorphisam(constructor overloading)1.(Function Overloading => )
//2.Operator Overloading), runtime polymorphisam//
/*Run-Time Polymorphism (Dynamic)

👉 Decided at run time

✔️ Function Overriding
✔️ Uses virtual keyword*/
/*👉 “Function overloading is compile-time polymorphism where functions have the same name but different parameters, while function overriding is runtime polymorphism where a child class redefines a parent class function.”*/
/* What is it?

Same function name but different parameters

✔ Happens in same class
✔ No inheritance needed*/
/* Function Overriding
👉 What is it?
Same function in different forms

✔ Requires inheritance
✔ Uses virtual keyword*/


/*Use virtual for runtime polymorphism
Base class pointer decides behavior at runtime
Overloading → same name, different parameters
Overriding → same function in child class*/

//complile time polymorphisam//
#include<iostream>
using namespace std;

class calculator{
    public:
    int  cal(int a,int b){
        return a + b;
    }
    float cal(float a,float b){
        return a - b;
    }
    double cal(double a,double b,double c){
        return a * b* c;
    }
    
    
};

//runtime polymorphisam//
class payment{
    public:
    void pay(){
        cout<<"payment is in process"<<endl;
    }
};
class UPI:public payment{
public:
void pay(){
    cout<<"payment is using UPI"<<endl;
}
};
class card:public payment{
    public:
    void pay(){
cout<<"payment is using card"<<endl;
    }
};
int main(){
    calculator c1;
    cout<<c1.cal(2,3)<<endl;
    cout<<c1.cal(2.5f,3.4f)<<endl; 
    cout<<c1.cal(2.0,3.0,5.1)<<endl;
    cout<<c1.cal(4.10,2.4,6.5)<<endl;


    payment *p;
    payment p;
    card c;
    UPI u;
    p->pay();

}