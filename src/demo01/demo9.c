#include <stdio.h>

int main() {
    int number;
    int m;
    int sum = 0;
    printf("请输入您需要判断的数字：");
    scanf("%d", &number);
    m = number;
    while(m) {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    if (sum == number) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}