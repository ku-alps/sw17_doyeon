#include <iostream>
using namespace std;

void printstar(int n, int row, int num) {
	if (num != 1) {
		printstar(n, row, num / 2);
		printstar(n, row + num / 2, num - num / 2);
	}
	else if(row<n) {
		for (int i = 0; i < 2*n-1-row; i++) {
			if (row >i) {
				cout << " ";
			}
			else cout << "*";
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < row +1; i++) {
			if (2*n-1-row-1 > i) {
				cout << " ";
			}
			else cout << "*";
		}
		cout << endl;
	}
	return;
}

int main() {
	int n;
	cin >> n;
	printstar(n, 0, 2*n - 1);
	return 0;
}