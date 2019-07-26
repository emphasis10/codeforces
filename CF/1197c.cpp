#include <bits/stdc++.h>
using namespace std;

int N, K, arr[300000], diff[300000];

int main()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];

	int minv, maxv;
	minv = maxv = arr[0];
	for (int i = 1; i < N; i++) {
		minv = min(minv, arr[i]);
		maxv = max(maxv, arr[i]);
		diff[i - 1] = arr[i] - arr[i - 1];
	}

	sort(diff, diff + N - 1, greater<int>());
	int sum = 0;
	for (int i = 0; i < K - 1; i++) sum += diff[i];
	cout << maxv - minv - sum << "\n";
}