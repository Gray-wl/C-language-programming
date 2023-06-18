#include <stdio.h>
#include <math.h>

// 宏定义
#define PI acos(-1)

int main() {
    double x;
    scanf("%lf", &x);
    printf("%g\n", PI / 180.0 * x);
    return 0;
}