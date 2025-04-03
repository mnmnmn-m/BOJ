#include<stdio.h>
#include<string.h>

char shomm[100][100];

int shom(char a[], char b[]) {
	int alpha[27] = { 0 };
	for (int i = 0; i < strlen(a); i++) {
		if (alpha[b[i] - 'a'] == 0) {
			alpha[b[i] - 'a'] = a[i];
		}
		else if (alpha[b[i] - 'a'] != a[i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", shomm[i]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (shom(shomm[i], shomm[j]) && shom(shomm[j], shomm[i])) {
				ans++;
			}
		}
	}
	printf("%d", ans);
	return 0;
}