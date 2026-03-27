#include<iostream>
using namespace std;
class Teacher {
//single inheritance (Can cause ambiguity problem (diamond problem))//
public:
string name;
int age;
void show(){
    cout<<"class A"<<endl;
}
};
class student:public Teacher{
public:
int roll;
void get(){
    cout<<"my name"<<name<<endl;
    cout<<"my age"<<age<<endl;
    cout<<"my roll "<<roll<<endl;
}
};

//Multilevel Inheritance//
class makeup{
public:
string lipsstick="YSL";
string heels="gucci";


void getmakeup(){
    cout<<"my lipsstick is "<<lipsstick<<endl;
    cout<<"my heels are "<<heels<<endl;
}

};
class dress:public makeup{
    public:
string coat;
string jeens;
void dresscode(){
    cout<<"i love pink "<<lipsstick<<endl;
    cout<<"i love YSL "<<heels<<endl;
    cout<<"i love treanch "<<coat<<endl;
    cout<<"i love my gucci"<<jeens<<endl;
}
};
class girl: public dress
{
public:
string name;
string age;
void girldetail(){
    cout<<"my name is <"<<name<<endl;
    cout<<"my age is "<<age<<endl;
}

};
//Multiple Inheritance

//👉 One child class inherits from multiple parent classes
class laptop{
    public:
    string keyboard;
    int number;
    void setinput(string keyboard,int number){
this->keyboard=keyboard;
this->number=number;
    }
    void getoutput(){
        cout<<"my keyboard color is "<<keyboard<<endl;
        cout<<"number of keyboard is "<<number<<endl;

    }
};
class phone {
    public:
    string brand;
    int count;
    void setpart( string brand,int count){
this->brand=brand;
this->count=count;
    }
    void getpart(){
        cout<<"my phone is "<<brand<<endl;
        cout<<"number of phones"<<count<<endl;
    }

};
class mydetail:public laptop,public phone{

public:
string name;
int age;
void setdata(string name,int age){
    this->name=name;
    this->age=age;
}
void getdata(){
    cout<<"my name is "<<name<<endl;
    cout<<"my age is "<<age<<endl;
}
};


//Hierarchical Inheritance👉 One parent → multiple child classes

// Parent class
class Vehicle {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }
};

// Child class 1
class Car : public Vehicle {
public:
    void showCar() {
        cout << "Car brand: " << brand << endl;
    }
};

// Child class 2
class Bike : public Vehicle {
public:
    void showBike() {
        cout << "Bike brand: " << brand << endl;
    }
};

//Hybrid inheritance//
//Diamond Problem in C++
//📌 What is it?

//👉 It happens in multiple + hierarchical inheritance (hybrid)
//👉 When a class inherits from two classes that have the SAME parent

   /*   A
       / \
      B   C
       \ /
        D      Solution: Use virtual inheritance */


        class A {
public:
    int x;
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main(){
student s1;
s1.name="payal"; 
s1.age=23;
s1.roll=4;

girl g;
g.name="tina";
g.age=21;
g.dresscode();
g.girldetail();
mydetail m1;

m1.setinput("pink",1);
m1.setpart("i phone",1);
m1.setdata("riya",24);

m1.getoutput();
m1.getpart();
m1.getdata();

Car c;
    c.setBrand("Toyota");
    c.showCar();

    Bike b;
    b.setBrand("Yamaha");
    b.showBike();


    D obj;
    obj.x = 10;   // ✅ No ambiguity
    cout << obj.x;

return 0;
}