#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,m,val;
	cin >>n>>m;

	vector<vector<int>> matrix;
   for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        matrix.push_back(v);
    }
           vector<int> temp;
         int col;
        for(int i=0;i<matrix.size();i++){
            int min=INT_MAX,col=0;
           for(int j=0;j<matrix[0].size();j++){
               if(min>matrix[i][j]) {
                   min=matrix[i][j];
                   col=j;
               }
           }
            int max=INT_MIN;
            for(int k=0;k<matrix.size();k++){
                if(matrix[k][col]>=max) max=matrix[k][col];
            }
            
            if(max==min) temp.push_back(max);
        }
        
            for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << " ";
            }
}
