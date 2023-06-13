#include <stdio.h>

int main() {
    char str[100] = {0};
    while(scanf("%[^\n]", str) != EOF) {
        getchar();
        printf(" has %d digits!", printf("%s", str));
    }
    return 0;
}