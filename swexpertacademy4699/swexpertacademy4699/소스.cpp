#include <iostream>
using namespace std;

int main() {
	int L, K, T, mini, temp;
	char a[2000];
	int p[2000][2], d[2000][2];
	cin >> T >> L >> K;
	cin >> a;
	for (int i = 0; i < L; i++) {
		cin >> p[i][0] >> p[i][1];
	}
	for (int i = 0; i <= L; i++)
		d[i][0] = 0;
	for (int i = 0; i <= L; i++)
		d[i][1] = 0;

	for (int i = 2; i <= L; i++) {
		for (int j = 0; j <= L - K; j++) {
			mini = 1000000000;
			temp = p[a[j] - 'a'][0] + d[j + 1][i - 1];
			if (temp < mini) mini = temp;
			temp = p[a[j + i - 1] - 'a'][0] + d[j][i - 1];
			if(temp)
		}
	}
}