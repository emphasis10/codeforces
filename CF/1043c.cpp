#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
	cin >> s;

	bool chk = false;
	int i;
	for (i = 0; i < s.length() - 1; i++) {
		if (s[i] != s[i + 1]) {
			if (!chk) {
				if (s[i] == 'b' && s[i + 1] == 'a') {
					cout << "1 ";
					reverse(s.begin(), s.begin() + i + 1);
					chk = true;
				}
				else cout << "0 ";
				
			}
			else {
				cout << "1 ";
				reverse(s.begin(), s.begin() + i + 1);
			}
		}
		else cout << "0 ";
	}
	if (i < s.length()) {
		if (s[0] == 'b') cout << "1\n";
		else cout << "0\n";
	}
}