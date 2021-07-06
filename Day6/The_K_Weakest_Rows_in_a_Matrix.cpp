#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int n,m,val;
	cin >>n>>m;

	vector<vector<int>> mat;
   int k;
   for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        mat.push_back(v);
    }
         cin>>k;
           vector<int> temp;
          for(int j=0; j<mat[0].size()+1 && k; j++){
            for(int i=0; i<mat.size() && k; i++){
                if((j==mat[0].size() || mat[i][j]==0) && mat[i][0]!=-1){
                    k--;
                    mat[i][0]=-1;
                    temp.push_back(i);
                }
            }
        }
        
            for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << " ";
            }
}
