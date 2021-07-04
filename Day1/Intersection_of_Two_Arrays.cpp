#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int> nums1;
    vector<int> nums2;

	for(int i=0;i<n;i++){
	cin>>val;
	nums1.push_back(val);
	}
	for(int i=0;i<n;i++){
	cin>>val;
	nums2.push_back(val);
	}
	
	unordered_map<int,int> mp;
        vector<int> ans;
        for(auto x : nums1) mp[x]++;
        for(auto x : nums2) mp[x]++;
        for(auto x : mp){
            if(!x.second) ans.push_back(x.first);
        }
        
        for(int i=0;i<n;i++) cout<<ans[i];
	
    return 0;
}

        