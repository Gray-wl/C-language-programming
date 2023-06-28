#include <stdio.h>

// 计算BMI
int main() {
    double w, h;
    scanf("%lf%lf", &w, &h);
    printf("%.2lf\n", w / (h * h));
    return 0;
}