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

        vector<vector<int>> temp(matrix[0].size());
        for(int i=0;i<matrix[0].size();i++){
        for(int j=0;j<matrix.size();j++)
        temp[i].push_back(matrix[j][i]);
        }
        
            for (int i = 0; i < temp.size(); i++) {
            for (int j = 0; j < temp[0].size(); j++)
            cout << temp[i][j] << " ";
            cout << endl;
            }
}
