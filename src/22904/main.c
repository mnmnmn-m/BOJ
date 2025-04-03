#include<stdio.h>
#include<math.h>

int main() {
    int K;
    scanf("%d", &K);
    if (K % 9 != 0 && K % 9 != 1) {
        printf("-1");
        return 0;
    }
    if (K % 9 == 0) {
        int h = K / 9;
        int ay[4] = { 9, 27, 36 };
        for (int i = 0; i < 3; i++) {
            printf("%d", ay[i]);
            for (int i = 0; i < h - 1; i++) {
                printf("9");
            }
            printf("\n");
        }
    }
    else {
        int h = K / 9;
        int ay[4] = { 19, 55, 73 };
        for (int i = 0; i < 3; i++) {
            printf("%d", ay[i]);
            for (int i = 0; i < h - 1; i++) {
                printf("9");
            }
            printf("\n");
        }
    }
}