#include <bits/stdc++.h>

using namespace std;

bool isPowerOfFour(int n) {
   if(n==0) return false;
	while((n%4) == 0) n/=4;
	if(n==1) return true;
	return false;
    }
int main() 
{
int n;
cin>>n;
 if(isPowerOfFour(n)) cout<<"true";
 else cout<<"false";
 } 
 

//Power of Four