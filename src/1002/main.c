#include<stdio.h>
#include<math.h>

int main() {
	int x1, x2, y1, y2, r1, r2, T;
	double d;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
		if (d == 0 && r1 == r2) {
			printf("-1");
		}
		else if (d < r1 + r2 && abs(r1 - r2) < d) {
			printf("2");
		}
		else if (d == r1 + r2 || d == abs(r1 - r2)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	return 0;
}