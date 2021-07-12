
#include <bits/stdc++.h>

using namespace std;

int main() 
{
string paragraph,val;
cin>>paragraph;
vector<string> banned;
int n;
cin>>n;
	for(int i=0;i<n;i++){
	cin>>val;
	banned.push_back(val);
	} 
	  unordered_set<string>set(begin(banned), end(banned));
        for (int i = 0; i < paragraph.length(); i++)
            paragraph[i] = isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' ';
        stringstream ss(paragraph);
        string str;
        unordered_map<string, int>u;
        while (ss >> str)
            if(!set.count(str))
                u[str]++;
        int freq = INT_MIN;
        for (auto c : u)
            if (c.second > freq)
                freq = c.second, str = c.first;
            cout<<str;
          }  
            
               //Most Common Word
               