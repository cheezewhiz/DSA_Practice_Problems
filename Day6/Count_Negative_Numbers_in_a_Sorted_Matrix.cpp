#include <bits/stdc++.h>

using namespace std;

 int bSearch(vector<vector<int>> a,int l, int r, int k){
        int ans = a[0].size();
        while(l <= r){
            int mid = l+(r-l)/2;
            
            if(a[k][mid] < 0){
                ans = mid;
                r = mid -1;
            }else{
                l = mid+1;
            }
        }
        
        return ans;
    }
    

int main() 
{
 int n,m,val;
	cin >>n>>m;

	vector<vector<int>> grid;
   int k;
   for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        grid.push_back(v);
    }
         int c=0; 
        for(int i=0 ;i<grid.size(); i++){  
            int ans = bSearch(grid,0,grid[0].size()-1,i);
            c+=(grid[0].size()-ans);
        }
        
        cout<<c;
       
}
