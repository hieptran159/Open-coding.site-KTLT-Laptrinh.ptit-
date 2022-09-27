#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll n;
ll tinh(ll n){
  if(n<=1) return n;
  ll x=sqrt(n);
  ll a=n%2+tinh(n/2), b=n%3+tinh(n/3), c=n-x*x+tinh(x);
  return 1+min(a,min(b,c));
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    cout<<tinh(n)<<'\n';
  }
return 0;
}
