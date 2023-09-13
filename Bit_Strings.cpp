#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master

bool isEven(ll n) { return (n % 2 == 0); }

int main() {

	ll n, s = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		s = 2 * s % ((int)1e9 + 7);
	}
	cout << s;
}