#include <stdio.h>

#define YES "YES"
#define NO "NO"

// 四位数中有偶数位么
int main() {
    int n;
    scanf("%d", &n);
    if((n % 10) & 1 && (n / 10 % 10) & 1 && (n / 100 % 10) & 1 && (n / 1000) & 1) {
        printf("%s\n", NO);
    } else {
        printf("%s\n", YES);
    }
    return 0;
}