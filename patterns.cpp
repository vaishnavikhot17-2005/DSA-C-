
#include<bits/stdc++.h>
using namespace std;
int pattern1(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern2(int n){
    for(int i=0;i<=n;
    i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}
int pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<n-1+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int pattern6(int n)
  {
    for(int i=0;i<=n;i++){
        //space//
    
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        //star//
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        //space//
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";

    }
    cout<<endl;

  }  


cout<<endl;
  }

int pattern7(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int pattern8(int n){
     for(int i=0;i<=n;i++){
        //space//
    
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //star//
        for(int j=0;j<2*i+1;j++)
        {            cout<<"*";
        }
        //space//
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";

    }
    cout<<endl;

  }  
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int pattern9(int n){

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int pattern10(int n)
{
    int start =1;
    for(int i=1;i<n;i++){
        if(i%2==0){
            start=1;
        }
        else {
            start =0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }cout<<endl;
}
int pattern11(int n){
    for(int i=1;i<=n;i++){
    
    // left numbers
    for(int j=1;j<=i;j++){
        cout<<j;
    }

    // spaces
    for(int j=1; j<=2*(n-i); j++){
        cout<<" ";
    }

    // right numbers
    for(int j=i; j>=1; j--){
        cout<<j;
    }

    cout<<endl;
}
}
int pattern12(int n )
{
for(int i=1;i<n;i++)

{
    for(int j=0;j<=n-i+1;j++)
{
cout<<" ";
}
//number
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        cout<<endl;
   

}
}
int pattern13(int n){
    int num = 1;

for(int i = 1; i <= n; i++) {

    for(int j = 1; j <= i; j++) {
        cout << num << " ";
        num++;
    }

    cout << endl;
}
cout<<endl;
}
int pattern14(int n){
    for(int i=0; i<=n;i++){
     for(char ch='A';ch<='A'+(n-i-1);ch++){
    cout<<ch;
}
        cout<<endl;
    
    }
}
int pattern15(int n){
    for(int i=0; i<=n;i++){
     for(char ch='A';ch<='A'+i+1;ch++){
    cout<<ch;
}
        cout<<endl;
    
    }
    cout<<endl;
}
int pattern16(int n){
    for(int i=0; i<=n;i++){
        for(char ch='A';ch<='A'+(n-i+1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int pattern17(int n){
for(int i = 0; i < n; i++) {
char ch = 'A' + i;
for(int j = 0; j <= i; j++) {
cout << ch;
}

 cout << endl;
    }
    cout<<endl; 
}
int pattern18(int n){
    for(int i=0; i<=n;i++){
        //space//
        for(int j=0; j<=n-i-1;j++){
            cout<<" ";
        }
        //cha// 
        char ch='A';
        for(int j=0; j<=2*i+1;j++ ){
            cout<<ch;
            ch++;   


        }
        for(int j=0; j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }

cout<<endl;
}
int pattern19(int n){
for(int i=0;i<=n;i++){
    for(int j=0; j<n-i;j++){
        cout<<" ";
    }// Print increasing letters
    for(char ch='A';ch<='A'+(i-1);ch++){
        cout<<ch;
    }//Print decreasing letters:>> So decreasing part must skip the middle character
    for(char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        } cout<<endl;
}
}
int pattern20(int n){
    for(int i=0; i<=n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch <<" ";
        }cout<<endl;
    }cout<<endl<<" ";
}
int pattern21(int n){ 

// Top half
for(int i = 0; i <= n; i++)
{
    for(int j = 0; j <= n-i+1; j++)
        cout << "*";

    for(int j = 1; j <= 2*(i-1); j++)
        cout << " ";

    for(int j = 1; j <= n-i+1; j++)
        cout << "*";

    cout << endl;
}

// Bottom half
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= i; j++)
        cout << "*";

    for(int j = 1; j <= 2*(n-i); j++)
        cout << " ";

    for(int j = 1; j <= i; j++)
        cout << "*";

    cout << endl;
}
}
int pattern22(int n){
// Top half
    for (int i = 1; i <= n; i++) {
        // left stars
        for (int j = 1; j <= i; j++) cout << "*";

        // middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";

        // right stars
        for (int j = 1; j <= i; j++) cout << "*";

        cout << endl;
    }

    // Bottom half
    for (int i = n; i >= 1; i--) {
        // left stars
        for (int j = 1; j <= i; j++) cout << "*";

        // middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";

        // right stars
        for (int j = 1; j <= i; j++) cout << "*";

        cout << endl;
    }

    return 0;
    }
int main(){
    int n; 
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
}