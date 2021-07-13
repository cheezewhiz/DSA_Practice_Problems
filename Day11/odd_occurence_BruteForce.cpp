
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

int c,ans;
for(int i=0;i<n;i++){
    c=1;
    for(int j=0;j<n;j++){
        if(nums[i]==nums[j] && j!=i) c++;
    }
    if(c%2!=0) ans=nums[i];
   
}
cout<<ans;
 }  
 
   //Odd Occurrence(Bruteforce)