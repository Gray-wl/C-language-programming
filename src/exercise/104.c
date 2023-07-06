#include <stdio.h>

// 数字之中有9么
int main() {
    char a[5] = {0};
    scanf("%s", a);
    for(int i = 0; i < 3; i++) {
        if (a[i] == '9') {
            a[0] = 'Y';
            a[1] = 'E';
            a[2] = 'S';
            break;
        }
    }
    if (a[0] != 'Y') {
        a[0] = 'N';
        a[1] = 'O';
        a[2] = '\0';
    }
    printf("%s\n", a);
    return 0;
}