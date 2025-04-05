#include <stdio.h>
#include <string.h>

int main() {
    int N, M, K;
    scanf("%d %d", &N, &M);
    char table[51][51];
    for (int i = 0; i < N; i++) {
        scanf("%s", table[i]);
    }
    scanf("%d", &K);
    int maxLit = 0;
    for (int i = 0; i < N; i++) {
        int zeroCount = 0;
        for (int j = 0; j < M; j++) {
            if (table[i][j] == '0')
                zeroCount++;
        }
        if (zeroCount <= K && (K - zeroCount) % 2 == 0) {
            int count = 0;
            for (int k = 0; k < N; k++) {
                if (strcmp(table[i], table[k]) == 0)
                    count++;
            }
            if (count > maxLit) {
                maxLit = count;
            }
        }
    }
    printf("%d", maxLit);
}