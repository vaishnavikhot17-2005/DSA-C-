/*A static variable=>in C++ is a variable that retains its value between function calls and is shared among all objects of a class, with memory allocated only once.*/
/*Stored in memory only once
Default value = 0*/

/*Static variables are stored in data segment, not stack*/
#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;   // pure virtual function
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;

    s = &c;
    s->area();
}