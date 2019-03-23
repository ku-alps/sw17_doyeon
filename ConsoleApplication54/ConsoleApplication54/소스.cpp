#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, num, onum;
	cin >> n;
	for (int i = 1; i < n; i++) {
		num = i;
		onum = i;
		while (num / 10) {
			onum = onum + num % 10;
			num = num / 10;
		}
		onum = onum + num;
		if (onum == n) {
			cout << i << endl;
			break;
		}
		if (i == n - 1) {
			cout << 0 << endl;
		}
	}
	return 0;
}