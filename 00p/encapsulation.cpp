#include<iostream>
#include <string>
#include <cctype>
using namespace std;
//bank account//
class bankaccount{
private:
double balance;
public:
bankaccount(){
    balance=0;
}
void diposite(double ammount){
    if(ammount>0){
        balance+=ammount;
        cout<<"diposited"<<ammount<<endl;
    }
    else{
        cout<<"invalid deposite ammount"<<endl;
    }
}
void withdrow(double ammount){
    if(ammount<=balance){
        balance-=ammount;
        cout<<"withdrawn"<<ammount;
    }
    else{
        cout<<"insufficient balance"<<endl;
    }
}
double getbalance(){
    return balance;

};

};
//student //

class student{
    private:
    int marks;
    public:
student(){
marks=0;
}
    
void setmarks(int m){
marks=m;
if(m>=0&&m<=100){
    marks=m;

}
else{
    cout<<"invalid marks";
}
}
int getmarks(){
    return marks;
}
string getgrade(){
    if(marks>90){
        return "A";
    }
    else if(marks>75&&marks<89){
        return "B";
    }
    else if(marks>50&&marks<74){
        return "C";
    }
    else{
        return "Fail";
    }
}

};
//employee//
class employee{
    private:
    double salary;
    public:
    employee(){
        salary=0;
    }
    void  setsalary(double s){
        if(s>=10000){
            salary=s;
            cout<<"valid salary "<<endl;;
        }
        else{
            cout<<"enter valid salary"<<endl;
        }
    }
    

    double getsalary(){
        return salary;
    };


    double calculateBonus(){
        return salary * 0.10;

    }


};
//password//
class PasswordManager{
    private:
    string password;
    public:
    void  setpassword(string p ){
        
       if(p.length()>=8)
       {
        password=p;
        cout<<"valid password"<<endl;}
        else{
            cout<<"invalid password"<<endl;
        }
    }

    string checkPassword(string p){
return "password is correct";
    }

};
int main(){
    bankaccount b1;
    b1.diposite(5000);
    b1.withdrow(3000);
cout<<"current balance"<<b1.getbalance()<<endl;

student s1;
s1.setmarks(95);
cout<<"Marks" <<s1.getmarks()<<endl;
cout<<"grade"<<s1.getgrade()<<endl;
employee e1;
e1.setsalary(56000);
cout<<e1.getsalary();
cout<<e1.calculateBonus();

}
