#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"enter number";
    cin>>number;
    for(int i=number;i>=1;i--)//always check these conditons i c in 
    {

        cout<<i <<endl;
    }
  int count;
  cout<<"enter number to get even number";
  cin>>count;
  for (int i=count;i>=1;i--)
  {
    if(i%2==0){
        cout<<i;

    }
  }
  
  
    
return 0;

   
};