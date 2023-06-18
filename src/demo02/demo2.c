#include <stdio.h>

int main() {
    char str[100] = {0};
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sprintf(str, "%d.%d.%d.%d", a, b, c, d);
    printf("%s\n", str);
    return 0;
}