#include <stdio.h>

#define YES "YES"
#define NO "NO"

// 天会下雨么
int main() {
    double H;
    char str[5] = {0};
    scanf("%lf", &H);
    printf("%s\n", H - 55.4 <= 0 ? NO : YES);
    return 0;
}