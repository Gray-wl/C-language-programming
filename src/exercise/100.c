#include <stdio.h>

// 计算复利
int main() {
    int m = 6, n;
    double sum = 0.0;
    scanf("%d", &n);
    while(m--) {
        sum = (n + sum) * (1 + 0.00417);
    }
    printf("$%.2lf\n", sum);
    return 0;
}