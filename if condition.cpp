#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()

{
    int number;
    cin>>number;
    
    
    string arry[]={"one","two","three","four","five","six","seven","eight","nine"};
     if(number>=1 && number<=9){
        cout<< arry[number-1];
    } 
    else{
        cout<<"Greater than 9";
    }
    return 0;
}
