#include <bits/stdc++.h>
using namespace std;

long long N, arr[2][100000], dp[2][100000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[0][i];
	for (int i = 0; i < N; i++) cin >> arr[1][i];

	if (N == 1) {
		cout << max(arr[0][0], arr[1][0]) << "\n";
		return 0;
	}

	long long maxv = 0;

	dp[0][0] = arr[0][0]; maxv = max(maxv, dp[0][0]);
	dp[1][0] = arr[1][0]; maxv = max(maxv, dp[1][0]);

	dp[0][1] = arr[0][1] + dp[1][0]; maxv = max(maxv, dp[0][1]);
	dp[1][1] = arr[1][1] + dp[0][0]; maxv = max(maxv, dp[1][1]);

	for (int i = 2; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			dp[j][i] = max(dp[j][i - 2], max(dp[1 - j][i - 1], dp[1 - j][i - 2])) + arr[j][i];
			maxv = max(maxv, dp[j][i]);
		}
	}
	cout << maxv << "\n";
}