#include <stdio.h>

// 求绝对值
int main() {
    double a;
    scanf("%lf", &a);
    printf("%g\n", a >= 0 ? a : -a);
    return 0;
}