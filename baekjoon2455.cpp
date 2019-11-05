#include <iostream>
using namespace std;

int main() {
	int max = 0, in, out, pnum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		pnum -= out;
		pnum += in;
		max = max > pnum ? max : pnum;
	}

	cout << max << endl;

	return 0;
}