#include <stdio.h>

// 注水问题
int main() {
    int a, b, c, t;
    double T;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    double a1 = 1.0 / a, b1 = 1.0 / b, c1 = 1.0 / c;
    T = t + (1 - (a1 + b1) * t) / (a1 + b1 - c1);
    printf("%.2lf\n", T);
    return 0;
}