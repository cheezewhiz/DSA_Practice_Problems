#include <bits/stdc++.h>

using namespace std;

int main() 
{
 string s;
 char c;
	cin>>s>>c;     
         vector<int> index,temp;
        int mini;
        for(int i=0;i<s.size();i++) if(s[i]==c) index.push_back(i);
      
        for(int i=0;i<s.size();i++){
              mini=INT_MAX;
            for(int  j=0;j<index.size();j++) mini=min(abs(index[j]-i),mini);
            temp.push_back(mini);
        }
       for(int i=0;i<s.size();i++) cout<<temp[i]<<" ";
        return 0;
}

         //Shortest Distance to a Character
         
         
                 