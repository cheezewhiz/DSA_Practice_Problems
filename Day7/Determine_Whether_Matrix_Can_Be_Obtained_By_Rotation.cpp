#include <bits/stdc++.h>

using namespace std;

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target) return true;
      int turn=3;
        while(turn--){
            for(int i=0;i<mat.size();i++){
                for(int j=i;j<mat[0].size();j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<mat[0].size();i++){
            reverse(mat[i].begin(),mat[i].end());    
            }
            
            if(mat==target) return true;
        }
        return false;
    }

int main() 
{
 int n,m,val;
	cin >>n>>m;

	vector<vector<int>> mat,target;
   
   //matrix
   for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        mat.push_back(v);
    }
    
    //target matrix
     for (int i = 0; i < n; i++) {
        vector<int> v;
  
        for (int j = 0; j < m; j++) {
            cin>>val;
            v.push_back(val);
        }
        target.push_back(v);
    }

       if(findRotation(mat, target))  cout<<"true";
       else cout<<"false";
        
        
}
