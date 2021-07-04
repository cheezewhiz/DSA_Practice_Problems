#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n;
 string val; 
	cin >> n;

	vector<string>words;

	for(int i=0;i<n;i++){
	cin>>val;
	words.push_back(val);
	}
          unordered_set<string> st;
        string str[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(auto i:words){
            string s="";
            for(auto j:i){ 
                s+=str[j-'a'];
            }
            st.insert(s);
        }
        cout<<st.size();
    return 0;
}
