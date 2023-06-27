#include <stdio.h>

// 取数位II
int main() {
    char str[20] = {0};
    scanf("%s", str);
    // for(int i = 0; str[i] != '\0'; i++) {
    for(int i = 0; str[i]; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}