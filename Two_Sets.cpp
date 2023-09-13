#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master
//https://youtu.be/OtZ81ydc3WA?si=90hBk-lWiuRs1NWe

bool isEven(ll n) { return (n % 2 == 0); }

int main() {

	ll n;
	cin >> n;
	ll sum = (n * (n + 1)) / 2;

	if (isEven(sum)) {
		cout << "YES" << "\n";

		vector<ll> f;
		vector<ll> s;

		if (isEven(n)) { //if number of element is Even therefore equal distribution in set.
			for (int i = 0; i < n / 2; i++) { //trick to fill vector, used in reversal of array also

				if (isEven(i)) {
					f.push_back(i + 1); //1st no
					f.push_back(n - i); //last no
				}
				else {
					s.push_back(i + 1); //2nd no
					s.push_back(n - i); //2nd last no
				}
			}
		}
		else {
			for (int i = 0; i < (n - 1) / 2; i++) { //if number of element is Odd then (n-1) is even and again use the above logic for even distribution

				if (isEven(i)) {
					f.push_back(i + 1);
					f.push_back(n - i - 1);
				}
				else {
					s.push_back(i + 1);
					s.push_back(n - i - 1);
				}
			}

			if (f.size() > s.size()) { // putting the last numer that is "n" in correct vector/dynamic array in c++
				s.push_back(n);
			}
			else {
				f.push_back(n);
			}
		}

		cout << f.size() << "\n";
		for (int i : f) {	//for each loop in cpp
			cout << i << " ";
		}

		cout << "\n";

		cout << s.size() << "\n";
		for (int i : s) {
			cout << i << " ";
		}
	}
	else {
		cout << "NO" << "\n";
	}
}