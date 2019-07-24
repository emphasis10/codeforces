#include <bits/stdc++.h>
using namespace std;

int main()
{
	char tmp;
	int black, white;
	black = white = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> tmp;
			if (tmp >= 'a' && tmp <= 'z') {
				if (tmp == 'q') black += 9;
				else if (tmp == 'r') black += 5;
				else if (tmp == 'b') black += 3;
				else if (tmp == 'n') black += 3;
				else if (tmp == 'p') black += 1;
			}
			else {
				if (tmp == 'Q') white += 9;
				else if (tmp == 'R') white += 5;
				else if (tmp == 'B') white += 3;
				else if (tmp == 'N') white += 3;
				else if (tmp == 'P') white += 1;
			}
		}
	}

	if (white > black) cout << "White\n";
	else if (white < black) cout << "Black\n";
	else cout << "Draw\n";
}