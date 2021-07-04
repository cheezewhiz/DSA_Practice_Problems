#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int> arr;
   

	for(int i=0;i<n;i++){
	cin>>val;
	arr.push_back(val);
	}
	         int l=0,r=arr.size()-1;
        
        while(l<=r){
          int mid=l+(r-l)/2;  
            if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
                 cout<<mid;
                 break;
            }
        if(arr[mid]>arr[mid+1])
             r=mid;
            else
                l=mid;
        }
return 0;
}
