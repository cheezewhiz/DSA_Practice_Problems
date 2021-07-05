#include <bits/stdc++.h>

using namespace std;
bool isToeplitzMatrix(vector<vector<int>> matrix,int n,int m){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++)
        if(matrix[i][j]!=matrix[i+1][j+1]) return false;
    }
        return true;
}

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
    if(isToeplitzMatrix(matrix,n,m)) cout<<"True";
    else cout<<"False";
        
        return 0;
}
