
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 void max(int a,int b,int c,int d){
     
    if(a>b&&a>c&&a>d){
        cout <<a;
    }
    else if(b>c&&b>d){
        cout<<b;
    }
    else if(c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
}
int main() {
    int a;
    int b;
    int c;
    int d;

cin>>a>>b>>c>>d;
    max(a,b,c,d);  
    return 0;
}

