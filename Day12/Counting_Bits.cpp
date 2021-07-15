#include <bits/stdc++.h>

using namespace std;

 int count(int i){
        int c=0;
        while(i){
            i=i&(i-1);
            c++;
        }
        return c;
    }
int main() 
{
int n;
cin>>n;
  vector<int> temp;
        for(int i=0;i<=n;i++)
            temp.push_back(count(i));
          for(int i=0;i<=n;i++)
            cout<<temp[i]<<" ";    
 } 
 
 //Counting Bits