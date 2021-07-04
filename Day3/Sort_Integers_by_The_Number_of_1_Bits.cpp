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
	      int c,num;
        vector<pair<int, int> > temp;
        vector<int> ans;
        for(auto i:arr){
            c=0;
            num=i;
        while(num){
            num=num&(num-1);
            c++;
        }
            temp.push_back({c,i});
        }
        sort(temp.begin(),temp.end());
        
        for(auto x :temp) ans.push_back(x.second);
  
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        return 0;
}
