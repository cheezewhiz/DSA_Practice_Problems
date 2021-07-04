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
        temp.push_back(0);
        for(int i=0;i<nums.size();i++) temp.push_back(nums[i]+temp.back());

    int left,right;
    cin>>left>>right;
    
        if (left == 0) cout << temp[right];
	    else cout<<temp[right+1]-temp[left];
	    
	    return 0;	    
}
