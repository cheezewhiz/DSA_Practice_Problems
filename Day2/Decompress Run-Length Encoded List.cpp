#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int> nums;

	for(int i=0;i<n;i++){
	cin>>val;
	nums.push_back(val);
	}
	    vector<int> temp;
        for(int i=0;i<nums.size();i=i+2) temp.insert(temp.end(),nums[i],nums[i+1]);
        for(int i=0;i<n;i++) cout<<temp[i];
}

