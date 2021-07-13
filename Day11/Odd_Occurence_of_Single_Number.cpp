
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

sort(nums.begin(),nums.end());
int c=1,ans;
for(int i=0;i<n;i++){
    if(nums[i]==nums[i+1])c++;
   else{
       if(c%2!=0)
       ans=nums[i]; 
     c=1;
   }
}
cout<<ans;

 }  
 //Odd Occurrence(Sort)