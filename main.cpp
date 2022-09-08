/* Make it count */
#include <bits/stdc++.h>
#define f(i,x,y) for(int i=x; i<=y; ++i)
#define fn(i,x,y) for(int i=x; i>=y; --i)
#define ll long long
using namespace std;


int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);

    int t; cin >>t;
    while(t--){
        ll a, b;
        cin >>a >>b;
        ll sum = 0;
        if(a % 2 == 0 && b % 2 == 0){
            int k = (b - a)/2;
            sum = k*(b + a)/2;
        }
        if(a % 2 == 0 && b % 2 != 0){
            int k = (b - a + 1)/2;
            sum = k*(b + a + 1)/2;
        }
        if(a % 2 != 0 && b % 2 != 0){
            int k = (b - a + 2)/2;
            sum = k*(b + a )/2;
        }
        if(a % 2 != 0 && b % 2 == 0){
            int k = (b - a + 1)/2;
            sum = k*(b + a - 1)/2;
        }
        cout <<sum <<endl;
    }

    return 0;
}
