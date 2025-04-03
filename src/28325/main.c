#include <stdio.h>
#include<vector>
using namespace std;

vector<long long> idx;
long long jjokbang[250001] = { 0 };
int main() {
    int N;
    long long res = 0;
    int length = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%lld", &jjokbang[i]);
        res += jjokbang[i];
        if (jjokbang[i] != 0) {
            idx.push_back(i);
        }
    }
    if (res == 0) {
        printf("%d", N / 2);
        return 0;
    }
    for (int i = 0; i < idx.size(); i++) {
        if (i == idx.size() - 1) {
            length = (N - idx[i] + idx[0]) / 2;
            res += length;
        }
        else {
            length = (idx[i + 1] - idx[i]) / 2;
            res += length;
        }
        length = 0;
    }
    printf("%lld", res);
}