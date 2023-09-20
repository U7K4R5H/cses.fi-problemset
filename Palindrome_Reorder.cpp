#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master
//https://www.youtube.com/watch?v=dZ_6MS14Mg4&t=1809s

bool isEven(ll n) { return (n % 2 == 0); }

int main() {

	string s = "", ans = "";
	cin >> s;
	int c[26] = {};
	int k = 0;
	for (char ch : s) { //'A' to 'Z' frequency array
		c[ch - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		k += c[i] & 1; //bitwise AND for even or odd check => https://da.gd/b01eTd
	}

	if (k == 1 || k == 0) {

		for (int i = 0; i < 26; i++) {
			if (c[i] & 1 ^ 1) { //check for even frequency
				for (int j = 0; j < c[i] / 2; j++) { //only constructing the half of the total frequency, see line 45
					ans += (char)('A' + i);
				}
			}
		}

		cout << ans; //print 1st part of result

		for (int i = 0; i < 26; i++) { //only one character frequency can be odd, if not then its not a Palindrome string
			if (c[i] & 1) {
				for (int j = 0; j < c[i]; j++) {
					cout << (char)('A' + i); //printing the middle part if odd freq cha is there ....B.... OR ...KKK...
				}
			}
		}

		reverse(ans.begin(), ans.end()); //reversing the 1st half of the constructed string in order to be a Palindrome string

		cout << ans; //printing the reverse of 1st half i.e palindrome AA....AA
	}
	else {
		cout << "NO SOLUTION";
	}
}
