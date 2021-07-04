#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

vector<int> encoded;
int first;
    for(int i=0;i<n;i++){
	cin>>val;
	encoded.push_back(val);
	}
	cin>>first;
	  vector<int> temp;
        temp.push_back(first);
        for(int i=0;i<n;i++) temp.push_back(temp[i]^encoded[i]); 
        for(int i=0;i<n;i++) cout<<temp[i];
        return 0;
}
