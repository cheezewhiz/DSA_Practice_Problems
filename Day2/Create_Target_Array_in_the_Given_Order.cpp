#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int> nums;
	vector<int> inde;

	for(int i=0;i<n;i++){
	cin>>val;
	nums.push_back(val);
	}
	
	for(int i=0;i<n;i++){
	cin>>val;
	inde.push_back(val);
	}
	
	    vector<int> test;
       for(int i=0;i<nums.size();i++) test.insert(test.begin()+inde[i],nums[i]); 
      for(int i=0;i<n;i++) cout<<test[i];
}

