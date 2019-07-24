//TLE
#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll N;
int cnt;

bool isPrime(ll n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	cin >> N;
	while (N > 0) {
		++cnt;
		if (isPrime(N)) break;
		else {
			for (int i = 2; i <= sqrt(N); i++) {
				if (N % i == 0 && isPrime(i)) N -= i;
			}
		}
	}
	cout << cnt << "\n";
}