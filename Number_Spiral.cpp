#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master
// Solution video:- https://youtu.be/MlwnifQvs8M?si=rZZmf2RXsaVN6uDb

bool isEven(int n) { return (n % 2 == 0); }

int main() {

	int t = 0;
	cin >> t;
	while (t--) {

		ll x, y;
		cin >> x >> y;

		ll mx = 0;
		ll ans = 0;

		mx = max(x, y);

		/* This solution is causing TLE, so we use f(n) = n^2 - (n - 1) [1,3,7,13,21,31] Series
				for (ll i = 2; i < 2 * mx; i += 2) {
					k += i;
				}
		*/

		ll k = (mx * mx) - (mx - 1);

		if (x < y) {
			if (!isEven(y)) {
				ans = k + (y - x);
			}
			else {
				ans = k - (y - x);
			}
		}
		if (y < x) {
			if (isEven(x)) {
				ans = k + (x - y);
			}
			else {
				ans = k - (x - y);
			}
		}
		if (x == y) {
			ans = k;
		}
		cout << ans << endl;
	}
}