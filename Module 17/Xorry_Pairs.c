#include <stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0;i<T; i++) {
        int N;
        scanf("%d", &N);
        int k = countSetBits(N);
        long long result = 1LL << (k - 1);
        printf("%lld\n", result);
    }
    return 0;
}