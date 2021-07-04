#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,m,val;
	cin >>n>>m;

	vector<vector<int>> grid;
   
   for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        grid.push_back(v);
    }


	              int peri=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0) continue;
                int c=4;
                if(i-1>=0 && grid[i-1][j]==1) c--;
                if(i+1<grid.size() && grid[i+1][j]==1) c--;
                if(j-1>=0 && grid[i][j-1]==1) c--;
                if(j+1<grid[i].size() && grid[i][j+1]==1) c--;
                peri+=c;
            }
        }
        cout<<peri;
}
