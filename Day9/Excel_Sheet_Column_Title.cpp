#include <bits/stdc++.h>

using namespace std;


int main() 
{
int columnNumber;
	cin>>columnNumber;
         string s="";
        while(columnNumber){
            s=(char)('A'+ (columnNumber-1)%26)+s;
            columnNumber=(columnNumber-1)/26;
        }
        cout<<s;
        return 0;
}
             //Excel Sheet Column Title      
                       