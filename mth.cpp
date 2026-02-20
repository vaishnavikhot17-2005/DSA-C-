
/*#include<bits/stdc++.h>
using namespace std;
int getmax(int count1,int count2)

{
int count3=max(count1,count2);
cout<<count3;
}
int main()
{
    int count1;
    int count2;
    cin>>count1>>count2;
     getmax(count1,count2);//function name may get  conflit
    
     return 0;
}*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()

{
    int number;
    cin>>number;
    
    
    string arry[]={"one","two","three","four","five","six","sveevan","eight"};
     if(number>=1 && number<=9){
        cout<< arry[number-1];
    } 
    else{
        cout<<"Greater than 9";
    }
    return 0;
}


//2nd//
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    string arry[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++)
    { 
        if(i>=1&&i<=9)
        {
            cout<<arry[i-1]<<endl;
        }
        else if(i>=9&&i%2!=0)
        {
            cout<<"odd"<<endl;
            
        }
        else{
            cout<<"even"<<endl;
        }
        
    }
    
}
    
    
    



     

