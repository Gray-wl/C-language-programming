#include <stdio.h>

// 求和2
int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", n * (1 + n) / 2);
    return 0;
}