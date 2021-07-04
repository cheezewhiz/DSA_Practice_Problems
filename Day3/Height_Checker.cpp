#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,val;
	cin >> n;

	vector<int> heights;
   

	for(int i=0;i<n;i++){
	cin>>val;
	heights.push_back(val);
	}
	     vector<int> temp;
        int c=0;
        temp=heights;
        sort(temp.begin(),temp.end());
        for(int i=0;i<heights.size();i++) if(heights[i]!=temp[i]) c++;
        cout<<c;
}
