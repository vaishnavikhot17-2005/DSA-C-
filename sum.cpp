#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int number;
    cout<<"enter a number to calculate sum"<<endl;
    cin>>number;
for (int i=0;i<=number;i++)//0+0=0 0+1=1 , 1+2=3,3+3=6,4+6=10,5+10=15
{
    sum=sum+i; 
}
cout<<sum<<endl;
//addition 
int add;int num1,num2;
cout<<"enter numbers for addition";
cin>>num1;
cin>>num2;
cout<<num1+num2;
//greatest number
int count1,count2;
cout<<"enter numbers two find greatest number"<<endl;
cin>>count1>>count2;
if(count1>count2){
    cout<<"count1 is greater"<<count1<<endl;
}
else{
    cout<<"count2 is greater"<<count2<<endl;
}
return 0;

}
