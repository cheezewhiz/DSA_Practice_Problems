#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &image,int oldColor,int newColor,int sr,int sc){
        if(sr < 0 or sr >= image.size() or sc < 0 or sc >= image[0].size() or image[sr][sc] == newColor) return;        
       if(image[sr][sc]==oldColor) {
           image[sr][sc]=newColor;
        dfs(image,oldColor,newColor,sr-1,sc);
        dfs(image,oldColor,newColor,sr+1,sc);
        dfs(image,oldColor,newColor,sr,sc-1);
        dfs(image,oldColor,newColor,sr,sc+1);
       }
        
    }
    
int main() 
{
 int n,m,val;
	cin >>n>>m;

	vector<vector<int>> image;
   
   for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        image.push_back(v);
    }

              int sr,sc,newColor;
              cin>>sr>>sc>>newColor;
              int oldColor=image[sr][sc];
              if(oldColor!=newColor) 
              dfs(image,oldColor,newColor,sr,sc);
        
    
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
            cout << image[i][j] << " ";
            cout << endl;
            }
}
