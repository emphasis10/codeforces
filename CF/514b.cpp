#include <bits/stdc++.h>
using namespace std;

int n, x_0, y_0, x, y;
set<pair<int, int>> st;

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a % b);
}

bool xzero, yzero;

int main()
{
	cin >> n >> x_0 >> y_0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		x -= x_0;
		y -= y_0;

		int g = gcd(abs(x), abs(y));
		if (g != 0) {
			x /= g;
			y /= g;
		}

		if (x < 0) {
			x = -x;
			y = -y;
		}

		if (x == 0) xzero = true;
		else if (y == 0) yzero = true;
		else st.insert({ x, y });
	}
	cout << st.size() + xzero + yzero << "\n";
}