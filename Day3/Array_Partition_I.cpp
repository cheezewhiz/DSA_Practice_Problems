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
	     int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2) sum+=nums[i];
        cout<<sum;
}
