#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int a [5];
    cin >> a[0] >>a[1] >>a[2] >>a[3] >>a[4];
    cout<<a[2];*/
    int array[3][3]={0};
    array [1][1]=34;
    array [1][2]=44;
    array[1][3]=67;
    array[1][4]=88;
    //cout<<array[1][3];
int row=3 ,cloumn=3;
int i=0;
int j=0;
cout<<"[";
for (i=0;i<row;i++)
{
   // cout<<"[";
    for (j=0;j<cloumn;j++)
    { 
cout<<array[i][j];
if(j!=2){cout<<",";
}
}
if(i!=2){
    cout<<",";
}
    cout<<"]";
    
}
}



