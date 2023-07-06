#include <stdio.h>

// 乘车费用
int main() {
    int N;
    scanf("%d", &N);
    if (N > 3) {
        printf("%.1lf\n", 13 + 1 + (N - 3) * 2.3);
    } else {
        printf("%d\n", 13 + 1);
    }
    return 0;
}