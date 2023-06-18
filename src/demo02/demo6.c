#include <stdio.h>

int main() {
    char str[100] = {0}, ch;
    // scanf("%[^\n]", str);
    // gets(str);
    // puts(str);
    // printf("%s\n", str);
    ch = getchar();
    printf("%c\n", ch);
    return 0;
}