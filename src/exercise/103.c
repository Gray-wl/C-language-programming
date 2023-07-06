#include <stdio.h>

#define YES "YES"
#define NO "NO"

// 整除问题
int main() {
    int a, b;
    char str[5] = {0};
    scanf("%d%d", &a, &b);
    printf("%s\n", a % b ? NO : YES);
    return 0;
}