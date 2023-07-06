#include <stdio.h>

// 彩票
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if(x == y) {
        printf("%d\n", 100);
    } else if(x % 10 == y / 10 && x / 10 == y % 10) {
        printf("%d\n", 20);
    } else if(x % 10 == y / 10 || x / 10 == y % 10 || x / 10 == y / 10 || x % 10 == y % 10) {
        printf("%d\n", 2);
    } else {
        printf("%d\n", 0);
    }
    return 0;
}