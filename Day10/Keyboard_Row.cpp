#include <bits/stdc++.h>
using namespace std;
int main() 
{
vector<string> words;
int n;
string val;
cin>>n;
	for(int i=0;i<n;i++){
	cin>>val;
	words.push_back(val);
	}    
        vector<string> vs;
        int flag;
        int alpha[26]={2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        for(int i=0;i<words.size();i++){
          int temp=alpha[(int)(tolower(words[i][0]))-97],flag=1;
          for(int j=1;j<words[i].size();j++){
           if(temp!=alpha[(int)(tolower(words[i][j]))-97]) flag=0;
            }
            if(flag!=0) vs.push_back(words[i]);
          }
       for(int i=0;i<vs.size();i++) cout<<vs[i]<<" ";
        return 0;
}

                   //Keyboard Row
                   