#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master
//https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/

bool isEven(ll n) { return (n % 2 == 0); }

int main() {

	ll n, count = 0;
	cin >> n;
	for (ll i = 5; n / i >= 1; i *= 5) {
		count += (n / i);
	}
	cout << count;
}
/*
Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....

*/