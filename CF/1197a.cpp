#include <bits/stdc++.h>
using namespace std;

int T, N, arr[100000];

int main()
{
	ios::sync_with_stdio(0);
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++) cin >> arr[i];
		sort(arr, arr + N, greater<int>());
		cout << min(arr[1] - 1, N - 2) << "\n";
	}
}