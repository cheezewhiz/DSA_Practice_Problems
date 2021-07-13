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

int ans =nums[0];
for(int i=1;i<n;i++) ans^=nums[i];
cout<<ans;
 }  
   //Odd Occurrence(Xor)