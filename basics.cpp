#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string name;
    int x,y;
cout<<"Hey Hi "<<endl;
cout<<"enter your name"<<endl;
cin>>name;
cin>>x>>y;
cout<<"The value of a "<<x <<"and y is :"<<y <<endl;
std::cin.ignore();
//string str;
//getline(cin,str);
//cout<<str<<endl;

int age;
cout<<"enter your age ";
cin >> age;
if(age>=18){
    cout<<"you are adult"<<endl;
}else
{
    cout<<"you are not" <<endl;
}
int marks;
cout<<"enter marks"<<endl;
cin >>marks;

if(marks>=35)
{
    cout<<"C";
}
else if(marks>=50 && marks<=60)
{
    cout<<"B";

}
else if(marks>=70)
{
    cout<<"C";
};
std::cin.ignore();
int week;
cin>>week;
switch(week)
{
    case 1:
    cout<<"Monday";
    cout<<"check";
    break;
    case 2:
    cout<<"tuesday";
    cout<<"check";
    break;
    case 3:
    cout<<"sunday";
    cout<<"check";
    break;
    
defult:
cout<<"you enterd wrong week day ";
break;
}



  return 0 ;
};

//  //

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

