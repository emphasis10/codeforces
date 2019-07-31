#include <bits/stdc++.h>
using namespace std;

int N, arr[200000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	int i = 0;
	while (arr[i] != N) {
		if (arr[i] > arr[i + 1]) {
			cout << "NO\n";
			return 0;
		}
		++i;
	}
	
	while (i < N - 1) {
		if (arr[i] < arr[i + 1]) {
			cout << "NO\n";
			return 0;
		}
		++i;
	}
	cout << "YES\n";
}