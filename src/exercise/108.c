#include <stdio.h>

// 求面积的问题
int main() {
    char T[5] = {0};
    double m, n;
    scanf("%s", T);
    scanf("%lf%lf", &m, &n);
    printf("%.2lf\n", T[0] == 'r' ? m * n : (m * n) / 2);
    return 0;
}