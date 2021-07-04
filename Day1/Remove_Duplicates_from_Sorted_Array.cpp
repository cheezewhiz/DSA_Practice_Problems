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
        int i=0;
        if(n==0) return 0;
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]) i++;
            nums[i]=nums[j];
        }
        cout<<i+1;
	
    return 0;
}
