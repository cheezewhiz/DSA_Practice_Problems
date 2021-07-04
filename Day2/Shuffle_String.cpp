#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

string s;
vector<int> indices;
    for(int i=0;i<n;i++){
	cin>>val;
	indices.push_back(val);
	}
	 string a3=s;

 for(int i=0;i<n;i++) {
     a3[indices[i]]=s[i];
 }
for(int i=0;i<n;i++) cout<<a3[i];
        return 0;
}

