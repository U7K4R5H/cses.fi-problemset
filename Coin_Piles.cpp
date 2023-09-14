#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master
//https://youtu.be/gtqJJlvRpw8?si=HnUmqQ72HFublQnB

bool isEven(ll n) { return (n % 2 == 0); }

int main() {

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << ( ( (a + b) % 3 == 0) && (2 * a >= b) && (2 * b >= a) ? "YES" : "NO") << "\n";

	}
}
