#include <stdio.h>

void c(int shu, int s, int e) {
	int i, j, a, b, sum = 0;

	for (i = s; i <= e; i++) {
		a = i;
		while (a > 0) {
			b = a % 10;
			a = a / 10;
			if (b == shu)
				sum++;
		}
	}
	printf("%d ", sum);
}

int main() {
	int s, e, i, count;
	scanf("%d%d", &s, &e);
	for (i = 0; i < 10; i++) {
		c(i, s, e);
	}
	return 0;
}