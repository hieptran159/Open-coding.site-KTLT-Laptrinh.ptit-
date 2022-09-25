#include<bits/stdc++.h>
#define pi 3.14159265358979323846
#define epsilon 0.00001
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	float x;
        cin >> x;
        while (x > (2 * pi)){
			x -= 2 * pi;
		}
        float mau = 1.0;
        float tu = x;
        float sin = x;
        int dau = -1;
        for (int i = 1; (tu / mau) > epsilon; i++) {
            tu *= x * x;
            mau *= (2 * i) * (2 * i + 1);
            sin += dau * (tu / mau);
            dau = -dau;
        }
        cout << setprecision(6) << fixed << sin << endl;
    }
}
