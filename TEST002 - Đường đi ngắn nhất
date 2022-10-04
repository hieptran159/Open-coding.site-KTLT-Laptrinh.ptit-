#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
using namespace std;

ll t, m, n, dp[105][105], a[105][105], x, y;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  cin >> t;
  while(t--){
    cin >> m >> n;
    f(i,1,m) f(j,1,n) cin >> a[i][j];
    cin >> x >> y;
    f(i,1,n) dp[0][i]=INT_MAX, dp[m+1][i]=INT_MAX;
    f(i,1,m) if(i!=x) a[i][y]=INT_MAX;
    f(i,1,m) dp[i][y]=a[i][y];
    f(j,y+1,n){
      f(i,1,m){
        dp[i][j]=min(min(dp[i-1][j-1],dp[i][j-1]),dp[i+1][j-1])+a[i][j];
      }
    }
    ll ans=INT_MAX;
    f(i,1,m) ans=min(ans,dp[i][n]);
    cout<<ans<<'\n';
  }
return 0;
}
