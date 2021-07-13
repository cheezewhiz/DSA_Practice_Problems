#include <bits/stdc++.h>

using namespace std;

int main() 
{
  string s = "";
  int n, base;
  cin >>n>>base;
  while (n> 0) {
    s = to_string(n%base)+s;
    n/=base;
  }

  cout <<s;

 }  
  //Decimal to any base