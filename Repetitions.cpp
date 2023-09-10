#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

	string str;
	cin >> str;
	int ans = 1, c = 0;
	char l = 'A';

	for (char ch : str) {
		if (ch == l) {
			++c;
			ans = max(c, ans);
		}
		else {
			l = ch;
			c = 1;
		}
	}
	cout << ans;
}