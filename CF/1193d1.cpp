#include <bits/stdc++.h>
using namespace std;

int Q, N, K;
string s, cp = "RGB";

int main()
{
	cin >> Q;
	while (Q--) {
		cin >> N >> K;
		cin >> s;
		int ans = K;
		for (int i = 0; i <= s.length() - K; i++) {
			for (int cnt = 0; cnt < 3; cnt++) {
				int tmp = 0;
				for (int j = 0; j < K; j++) {
					if (s[i + j] != cp[(j + cnt) % 3]) ++tmp;
				}
				ans = min(ans, tmp);
				
			}
			if (ans == 0) break;
		}
		cout << ans << "\n";
	}
}