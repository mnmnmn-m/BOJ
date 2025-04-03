#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int dice[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &dice[i]);
    }
    int opposite[] = { 5, 4, 3, 2, 1, 0 };
    if (N == 1) {
        long long sum = 0, max = LLONG_MIN;
        for (int i = 0; i < 6; i++) {
            sum += dice[i];
            if (dice[i] > max) {
                max = dice[i];
            }
        }
        printf("%lld", sum - max);
    }
    else {
        long long one = LLONG_MAX, two = LLONG_MAX, three = LLONG_MAX;
        for (int i = 0; i < 6; i++) {
            if (dice[i] < one) {
                one = dice[i];
            }
        }
        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                if (opposite[i] != j) {
                    long long sum = dice[i] + dice[j];
                    if (sum < two) {
                        two = sum;
                    }
                }
            }
        }
        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                for (int k = j + 1; k < 6; k++) {
                    if (opposite[i] != j && opposite[j] != k && opposite[k] != i) {
                        long long sum = dice[i] + dice[j] + dice[k];
                        if (sum < three) {
                            three = sum;
                        }
                    }
                }
            }
        }
        long long result = 0;
        result += three * 4;
        result += two * ((N - 2) * 4 + (N - 1) * 4);
        result += one * ((N - 2) * (N - 2) + (N - 1) * (N - 2) * 4);
        printf("%lld", result);
    }
    return 0;
}
