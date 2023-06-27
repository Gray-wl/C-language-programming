#include <stdio.h>

// 取数位II
int main() {
    int a;
    scanf("%d", &a);
    // printf("%d\n%d\n%d\n", a / 100, a % 100 / 10, a % 10);
    printf("%d\n%d\n%d\n", a / 100, a / 10 % 10, a % 10);
    return 0;
}