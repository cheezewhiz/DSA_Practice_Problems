#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n;
 string val,min;
	cin >> n;

vector<string>strs;
    for(int i=0;i<n;i++){
	cin>>val;
	strs.push_back(val);
	}
       min=strs[0];
        for(auto i:strs){
            if(i.size()<min.size()) min = i;
        }
        int j=0;
        
            while(j<strs.size()){
          if(min==strs[j].substr(0,min.size())){
              j++;
          }
            else min.pop_back();
        }
        cout<<min;
        return 0;
}

                        // Longest Common Prefix
                        