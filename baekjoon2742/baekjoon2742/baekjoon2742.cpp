#include <stdio.h>

//cout으로 출력하면 시간 초과


int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}