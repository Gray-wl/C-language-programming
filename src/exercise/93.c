#include <stdio.h>

// 温度换算
int main() {
    double C;
    scanf("%lf", &C);
    printf("%.2lf\n", 1.8 * C + 32);
    return 0;
}