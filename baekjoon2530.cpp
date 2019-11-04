#include <iostream>
using namespace std;

int main() {
	int h, m, s, t;
	cin >> h >> m >> s >> t;
	s += t % 60;
	if (s > 59) {
		s = s % 60;
		m++;
	}
	t /= 60;
	m += t % 60;
	if (m > 59) {
		m = m % 60;
		h++;
	}
	t /= 60;
	h += t;
	h = h % 24;
	cout << h << " " << m << " " << s << endl;
	return 0;
}