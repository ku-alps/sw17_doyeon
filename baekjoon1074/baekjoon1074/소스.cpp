#include <iostream>
#include <math.h>
using namespace std;

__int64 findvnum(__int64 a, int r, int c, int N) {
	__int64 vnum;
	int i = pow(2, N);
	if (N == -1) {
		return a;
	}
	if (r < i) {
		if (c < i) vnum = findvnum(a, r, c, N - 1);
		else vnum = findvnum(a + i * i, r, c - i , N - 1);
	}
	else {
		if (c < i) vnum = findvnum(a + (i * i) * 2, r - i, c, N - 1);
		else vnum = findvnum(a + (i * i) * 3 , r - i, c - i, N - 1);
	}
	return vnum;
}

int main() {
	int N, r, c, arr[4] = { 0, 1, 2, 3 };
	cin >> N >> r >> c;
	__int64 vnum = findvnum(arr[0], r, c, N - 1);
	cout << vnum << endl;
	return 0;
}