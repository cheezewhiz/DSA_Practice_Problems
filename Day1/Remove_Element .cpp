#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int>& nums;
    int rem;

	for(int i=0;i<n;i++){
	cin>>val;
	nums.push_back(val);
	}
	cin>>rem;
       int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=rem) {
                nums[i]=nums[j];
                i++;
            }
        }
        cout<<i;
}
