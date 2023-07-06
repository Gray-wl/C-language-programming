#include <stdio.h>

// 包裹托运
int main() {
    double X, sum;
    scanf("%lf", &X);
    sum = (X > 15 ? 15 : X) * 6.0 + 9 * (X - 15) * (X > 15);
    printf("%.2lf\n", sum);
    return 0;
}