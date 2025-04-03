#include <stdio.h>

long long sum_f(long long n) {
    long long sum = 0;
    long long p = 1;
    while (p <= n) {
        long long count = (n / p) - (n / (p * 2));
        sum += count * p;
        p *= 2;
    }
    return sum;
}

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld", sum_f(B) - sum_f(A - 1));
    return 0;
}