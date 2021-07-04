#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int> candies;
    int extraCandies;

	for(int i=0;i<n;i++){
	cin>>val;
	candies.push_back(val);
	}
	cin>>extraCandies;
	    vector<bool> temp;
        int max=*max_element(candies.begin(),candies.end());
        for(auto i:candies){
            if((i+extraCandies)>=max) temp.push_back(true);
            else temp.push_back(false);
        }
       for(int i=0;i<n;i++) cout<<temp[i];
	
    return 0;
}

