#include <bits/stdc++.h>

using namespace std;

int main() 
{
 string s;
	cin>>s;
     int l=0,r=s.size()-1;
        while(l<=r){
             if(!isalpha(s[l])) {
                 l++;
                 continue;
             }
            if(!isalpha(s[r])){
               r--;
                 continue;
             } 
                swap(s[l],s[r]);
                 l++;
                 r--;
        }
      cout<<s;
        return 0;
}