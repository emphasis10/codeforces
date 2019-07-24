#include <bits/stdc++.h>
using namespace std;

int dir[4];

int main()
{
	int N;
	string s;

	cin >> N >> s;
	for (auto i : s) {
		if (i == 'U') ++dir[0];
		else if (i == 'D') ++dir[1];
		else if (i == 'L') ++dir[2];
		else ++dir[3];
	}

	cout << min(dir[0], dir[1]) * 2 + min(dir[2], dir[3]) * 2 << "\n";
}