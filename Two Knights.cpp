#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master
//https://youtu.be/uHAGgpa2qwA?si=AHrESj5CX3s8q1rE

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
/*
ans = n(C)r - total number of ways in which knight attack each other
where n = k*k i.e square grid and r = 2 (given two knights)

Observations:- Knights attack each other when the are placed in 'L'
formation in 2x3 or 3x2 grid (visualize MF).

So COUNT the number of 2x3 & 3x2 grid posible in kxk(chessboard).

In each of the above grid you can place knights in two ways, hence 4 at line 18
Watch the video above in link in comments at line 7.
*/