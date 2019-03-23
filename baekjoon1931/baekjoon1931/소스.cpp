#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main() {
	int n, num = 1, index = 0, input[2];
	vector<pair<int, int> > time;
	while (true) {
		cin >> n;
		if (n > 0 && n < 100001) break;
	}
	for (int i = 0; i < n; i++) {
		cin >> input[0] >> input[1];
		if (input[0] < 0 || input[1] < 0) i--;
		else time.push_back(pair<int, int>(input[1], input[0]));
	}
	sort(time.begin(), time.end());
	for (int i = 1; i < n; i++) {
		if (time[i].first >= time[index].first && time[i].second >= time[index].first&&time[i].first>=time[i].second) {
			num++;
			index = i;
		}
	}
	cout << num << endl;
	return 0;
}