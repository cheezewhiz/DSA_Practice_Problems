#include <bits/stdc++.h>

using namespace std;

int main() 
{
vector<int> nums;
int n,val;
cin>>n;
for(int i=0;i<n;i++){
    cin>>val;
    nums.push_back(val);
}
      for(int i=0;i<nums.size();i++)
       n^=i^nums[i];
cout<<n;
 }  
 //Missing Number