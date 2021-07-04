#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

vector<int> nums;
 int shuf;
    for(int i=0;i<n;i++){
	cin>>val;
	nums.push_back(val);
	}
	cin>>shuf;
	    vector<int> temp;
        for(int i=0;i<shuf;i++){
            temp.push_back(nums[i]);
            temp.push_back(nums[shuf+i]);
        }
         for(int i=0;i<n;i++) cout<<temp[i];
}

