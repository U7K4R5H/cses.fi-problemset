#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master

bool isEven(int n) { return (n % 2 == 0); }

int main() {

	ll n;
	cin >> n;
	ll ans = 0;
	for (ll k = 1; k <= n; k++) {

		ans = ((k * k * (k * k - 1)) / 2) - (4 * (k - 1) * (k - 2));

		cout << ans << "\n";
	}
}