#include <iostream>
using namespace std;

int main() {
	char c;
	int num = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> c;
			if (i % 2 == 0 && j%2==0) {
				if (c == 'F') num++;
			}
			else if (i % 2 == 1 && j % 2 == 1) {
				if (c == 'F') num++;
			}
		}
	}
	cout << num << endl;
	return 0;
}