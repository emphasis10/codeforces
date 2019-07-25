#include <bits/stdc++.h>
using namespace std;

int N, M;
#define ll long long

int main()
{
	cin >> N;
	ll arr[3];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) cin >> arr[j];

		ll maxv = 0;
		if (arr[0] + min(arr[1], arr[2]) < max(arr[1], arr[2])) maxv = max(maxv, arr[0] + min(arr[1], arr[2]));
		else maxv = max(maxv, (arr[0] + arr[1] + arr[2]) / 2);

		if (arr[1] + min(arr[0], arr[2]) < max(arr[0], arr[2])) maxv = max(maxv, arr[1] + min(arr[0], arr[2]));
		else maxv = max(maxv, (arr[0] + arr[1] + arr[2]) / 2);

		if (arr[2] + min(arr[0], arr[1]) < max(arr[0], arr[1])) maxv = max(maxv, arr[2] + min(arr[0], arr[1]));
		else maxv = max(maxv, (arr[0] + arr[1] + arr[2]) / 2);

		cout << maxv << "\n";
	}
}