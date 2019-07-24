#include <bits/stdc++.h>
using namespace std;

int N, K;
string s;
int arr[26];

int main()
{
	cin >> N >> K;
	cin >> s;
	for (auto i : s) ++arr[i - 'a'];

	for (int i = 0; i < 26; i++) {
		if (K > arr[i]) {
			K -= arr[i];
			arr[i] = 0;
		}
		else {
			arr[i] -= K;
			K = 0;
			break;
		}
	}

	stack<char> st;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (arr[s[i] - 'a'] > 0) {
			--arr[s[i] - 'a'];
			st.push(s[i]);
		}
	}

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	cout << "\n";
}