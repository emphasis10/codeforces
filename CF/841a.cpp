#include <bits/stdc++.h>
using namespace std;

int N, K, arr[100];
string s;

int main()
{
	cin >> N >> K;
	cin >> s;
	for (auto i : s) ++arr[i - 'a'];
	

	int maxv = 0;
	for (int i = 0; i < 26; i++) maxv = max(maxv, arr[i]);
	
	if (maxv > K) cout << "NO\n";
	else cout << "YES\n";
	return 0;
}