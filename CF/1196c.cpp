#include <bits/stdc++.h>
using namespace std;

int Q, N, x, y, a, b, c, d;

int main()
{
	cin >> Q;
	while (Q--) {
		cin >> N;
		int xr, xl, yh, yl;
		xr = yh = 100000;
		xl = yl = -100000;
		while (N--) {
			cin >> x >> y >> a >> b >> c >> d; //left, up, right, down

			if (!a && xl <= x) xl = x;
			if (!b && yh >= y) yh = y;
			if (!c && xr >= x) xr = x;
			if (!d && yl <= y) yl = y;
		}
	lpout: {}
		if (yl <= yh && xl <= xr) cout << "1 " << xl << " " << yl << "\n";
		else cout << "0\n";
	}
}