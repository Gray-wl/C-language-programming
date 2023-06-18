#include <stdio.h>

int main() {
    char str[100] = "192.168.0.1";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    return 0;
}