#include <stdio.h>

// 交换两位数
int main() {
    char n[5] = {0};
    scanf("%s", n);
    printf("%c%c\n", n[1], n[0]);
    return 0;
}