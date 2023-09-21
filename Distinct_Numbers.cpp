#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master

bool isEven(ll n) { return (n % 2 == 0); }

int main() {
	int n;
	cin >> n;
	int x;
	set<int> val;
	for (int i = 0; i < n; i++) {
		cin >> x;
		val.insert(x);
	}
	cout << val.size();
}
