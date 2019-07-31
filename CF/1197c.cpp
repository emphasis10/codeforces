#include <bits/stdc++.h>
using namespace std;

int N, K, arr[300000], diff[300000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 1; i < N; i++) diff[i - 1] = arr[i] - arr[i - 1];

	sort(diff, diff + N - 1, greater<int>());
	int sum = 0;
	for (int i = 0; i < K - 1; i++) sum += diff[i];
	cout << arr[N - 1] - arr[0] - sum << "\n";
}