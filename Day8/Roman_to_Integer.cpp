#include <bits/stdc++.h>

using namespace std;

int roman(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

int main() 
{
 int n;
 string s;
	cin>>s;
       int sum=0;     
        for(int i=0;i<s.size();i++){
          if(roman(s[i])<roman(s[i+1])) sum-=roman(s[i]);
            else sum+=roman(s[i]);
            }
        cout<<sum;
        return 0;
}

                        //Roman To Integer   
                        
                         