#include <stdio.h>

#define PI 3.14

// 圆形面积和周长
int main() {
    double r;
    scanf("%lf", &r);
    printf("%.2lf\n%.2lf\n", 2 * PI * r, PI * r * r);
    return 0;
}