#include <stdio.h>

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 一个月有多少天
int main() {
    int y, m;
    scanf("%d%d", &y, &m);
    printf("%d\n", day[m] + (m == 2 && (y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0))));
    return 0;
}