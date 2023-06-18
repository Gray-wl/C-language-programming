#include <stdio.h>

int main() {
    int a, b;
    char ch[10];
    scanf("%d%d%s", &a, &b, ch);
    printf("a = %d, b = %d, ch = %c\n", a, b, ch[0]);
    return 0;
}