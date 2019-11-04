#include <iostream>
using namespace std;

int main() {
	int n, max = 0, row, col;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cin >> n;
			if (max < n) {
				max = n;
				row = i;
				col = j;
			}
		}
	}
	cout << max << endl;
	cout << row << " " << col << endl;
	return 0;
}