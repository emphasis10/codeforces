#include <bits/stdc++.h>
using namespace std;

int N, a, b, pre;
bool rated, maybe;

int main()
{
	cin >> N;
	cin >> a >> b;
	if (a != b) rated = true;
	--N;
	pre = a;
	while (N--) {
		cin >> a >> b;
		if (a != b) rated = true;
		if (pre < a) maybe = true;
		pre = a;
	}

	if (rated) cout << "rated\n";
	else {
		if (!maybe) cout << "maybe\n";
		else cout << "unrated\n";
	}
}