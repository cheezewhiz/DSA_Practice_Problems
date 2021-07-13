#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n,base;
  cin >>n>>base;
  int len = 0,ans=0;
  while (n> 0) {
    int r = n % 10;
    ans += (r * pow(base, len++));
    n/= 10;
  }
  cout << ans;
}
   //Any Base to decimal