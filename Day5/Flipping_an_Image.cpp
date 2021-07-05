#include <bits/stdc++.h>

using namespace std;

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

          for(int i=0;i<image.size();i++){
          reverse(image[i].begin(), image[i].end());
          for(int j=0;j<image[0].size();j++) image[i][j] = 1-image[i][j];
        }
        
        
            for (int i = 0; i < image.size(); i++) {
            for (int j = 0; j < image[0].size(); j++)
            cout << image[i][j] << " ";
            cout << endl;
            }
}
