#include <stdio.h>

// 计算各位和
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}