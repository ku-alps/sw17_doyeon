#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, num[100000][2], summax;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i][0];
		if (i > 0) {
			num[i][1] = max(num[i - 1][1] + num[i][0], num[i][0]);
		}
		else {
			num[i][1] = num[i][0];
			summax = num[i][1];
		}
		summax = max(num[i][1], summax);
	}
	cout << summax << endl;
	return 0;
}