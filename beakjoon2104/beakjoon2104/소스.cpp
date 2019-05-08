#include <iostream>
#include <algorithm>
using namespace std;

long long int findmaxscore(int* a, int index, int n) {
	int minnum = 0;
	long long int maxscore = 0, sum = 0;
	if(n!=1) {
		maxscore = max(findmaxscore(a, index, n / 2), findmaxscore(a, index + n / 2, n - n / 2));
		int lindex = index + n / 2 - 1, rindex = index + n / 2;
		minnum = a[lindex] < a[rindex] ? a[lindex] : a[rindex];
		sum = a[lindex] + a[rindex];
		while (rindex - lindex < n) {
			if (lindex > index && rindex < index + n - 1) {
				if (a[lindex - 1] > a[rindex + 1]) {
					sum += a[lindex - 1];
					minnum = min(minnum, a[lindex - 1]);
					lindex--;
				}
				else {
					sum += a[rindex + 1];
					minnum = min(minnum, a[rindex + 1]);
					rindex++;
				}
			}
			else if (lindex == index && rindex != index + n - 1) {
				sum += a[rindex + 1];
				minnum = min(minnum, a[rindex + 1]);
				rindex++;
			}
			else if (lindex != index && rindex == index + n - 1) {
				sum += a[lindex - 1];
				minnum = min(minnum, a[lindex - 1]);
				lindex--;
			}
			else {
				lindex--;
			}
			maxscore = max(maxscore, sum*minnum);
		}
	}
	else maxscore = (long long int)a[index] * a[index];
	return maxscore;
}

int main() {
	int a[100000], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long int max = findmaxscore(a, 0, n);
	cout << max << endl;
}