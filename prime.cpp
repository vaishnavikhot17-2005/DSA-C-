#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"enter number";
    cin>>number;

    if(number<=1){
        cout<<"its not a prime number";
        return 0;
    }

    bool isPrime=true;

    for(int i=2;i<=number;i++)
    {
        if(number%2==0)
        {
            isPrime=false;

            break;
           }   
        }
        if (isPrime)
        {
            cout<<"is the prime number";
        }
        else
        {
            cout<<"is not prime number";
        }

    

    
    return 0;
}
