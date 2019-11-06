#include <iostream>
using namespace std;

int main() {
	int max = 0, in, out, num = 0;
	for (int i = 0; i < 10; i++) {
		cin >> out;
		num -= out;
		cin >> in;
		num += in;
		max = max > num ? max : num;
	}
	cout << max << endl;
	return 0;
}