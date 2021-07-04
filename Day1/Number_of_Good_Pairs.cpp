#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

vector<int>nums;
    for(int i=0;i<n;i++){
	cin>>val;
	nums.push_back(val);
	}
	  map<int,int> pa;
        int c=0;
        for(auto a : nums){
            c+=pa[a];
            pa[a]++;    
        }
        cout<<c;
        return 0;
}

