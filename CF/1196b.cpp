#include <bits/stdc++.h>
using namespace std;

int Q, N, K, tmp;
bool arr[200000];

int main()
{
	cin >> Q;
	while (Q--) {
		cin >> N >> K;
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			cin >> tmp;
			if (tmp % 2 == 0) arr[i] = false;
			else {
				++cnt;
				arr[i] = true;
			}
		}

		if (cnt < K) cout << "NO\n";
		else if (cnt == K) {
			cout << "YES\n";
			if (K == 1) {
				cout << N << "\n";
			}
			else {
				for (int i = 0; i < N; i++) {
					if (arr[i]) {
						if (K == 1) cout << N << " ";
						else cout << i + 1 << " ";
						--K;
					}
				}
				cout << "\n";
			}
		}
		else {
			if ((cnt - K) % 2 == 0) {
				cout << "YES\n";
				if (K == 1) {
					cout << N << "\n";
				}
				else {
					for (int i = 0; i < N; i++) {
						if (arr[i] && K > 0) {
							if (K == 1) cout << N << " ";
							else cout << i + 1 << " ";
							--K;

						}
					}
					cout << "\n";
				}
			}
			else cout << "NO\n";
		}
	}
}