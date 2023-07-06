#include <stdio.h>

#define YES "YES"
#define NO "NO"

// 七的奇倍数
int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", !(n % 7) && n & 1 ? YES : NO);
    return 0;
}