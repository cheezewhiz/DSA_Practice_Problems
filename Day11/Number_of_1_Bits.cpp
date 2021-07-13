#include <bits/stdc++.h>

using namespace std;

int main() 
{
uint32_t n;
cin>>n;
 int c=0;
        while(n){
            n=n&(n-1);
            c++;
        }
cout<<c;
 }  
   //Number of 1 Bits