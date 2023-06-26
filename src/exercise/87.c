#include <stdio.h>

// 矩形的面积与周长 保留两位小树
int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2lf\n", (a + b) * 2);
    printf("%.2lf\n", a * b);
    return 0;
}