#include <stdio.h>

#define PI 3.14

// 计算圆柱体的体积
int main() {
    double r, h;
    scanf("%lf%lf", &r, &h);
    double m = r * r * PI;
    printf("%.2lf\n%.2lf\n", m, m * h);
    return 0;
}