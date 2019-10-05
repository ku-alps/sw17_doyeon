#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, inclen = 1, declen = 1, input, prev = 0, incmax = 1, decmax = 1;
	cin >> n;
	cin >> prev;
	for (int i = 1; i < n; i++) {
		cin>> input;
		if (input > prev) {
			inclen++;
			declen = 1;
		}
		else if (input == prev) {
			inclen++;
			declen++;
		}
		else {
			inclen = 1;
			declen++;
		}
		incmax = max(inclen, incmax);
		decmax = max(declen, decmax);
		prev = input;
	}
	cout << max(incmax, decmax) << endl;
	return 0;
}