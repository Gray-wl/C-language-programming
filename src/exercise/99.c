#include <stdio.h>

// 求出跑道长度
int main() {
    double v, a;
    scanf("%lf%lf", &v, &a);
    printf("%.2lf\n", (v * v) / (2 * a));
    return 0;
}