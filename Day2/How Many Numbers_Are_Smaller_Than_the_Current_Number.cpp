#include <bits/stdc++.h>

using namespace std;

  int bsearch(vector<int> temp,int l,int r,int val){
        int mid=l+(r-l)/2;
        if(mid==0||(temp[mid]==val && temp[mid-1]<val)) return mid;
        if(val>temp[mid]) return bsearch(temp,mid+1,r,val);
        else return bsearch(temp,0,mid,val);
    }
    
int main() 
{
 int n,val;
	cin >> n;

	vector<int> nums;

	for(int i=0;i<n;i++){
	cin>>val;
	nums.push_back(val);
	}
	     vector<int> temp,ans;
        temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++) ans.push_back(bsearch(temp,0,n-1,nums[i]));
         for(int i=0;i<n;i++) cout<<temp[i];
}




   