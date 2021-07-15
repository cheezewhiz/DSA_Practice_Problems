#include <bits/stdc++.h>

using namespace std;

int main() 
{
int turnedOn;
cin>>turnedOn;
  vector<string> ans;
        for(int i=0;i<12;i++){  
            for(int j=0;j<60;j++){
                string s;
                if(__builtin_popcount(i) + __builtin_popcount(j)== turnedOn){
                    s+=to_string(i)+":";
                    if(j<10) s+="0";
                    s+=to_string(j);
                    ans.push_back(s);
                }
            }
        }
          for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";    
 } 
 