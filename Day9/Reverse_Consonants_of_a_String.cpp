#include <bits/stdc++.h>

using namespace std;

bool consonents(char c){
        return c=='a' || c=='e' || c=='i' 
        || c=='o' || c=='u' || c=='A'
        || c=='E' || c=='I' || c=='O' 
        || c=='U';  
    }

int main() 
{
 string s;
	cin>>s;
      int l=0,r=s.size()-1;
        while(l<r){
        if(consonents(s[l])){
             l++;
            continue;
        }
        if(consonents(s[r])){   
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

  //Reverse Consonents of a String
                    