#include <stdio.h>

#define H "He"
#define L "Li"
#define C "Cao"
#define D "Duan"
#define W "Wang"
#define N "Not Here"

// 他的名字
int main() {
    char x[5] = {0};
    scanf("%s", x);
    switch(x[0]) {
        case 'h':
            printf("%s\n", H);
            break;
        case 'l':
            printf("%s\n", L);
            break;
        case 'c':
            printf("%s\n", C);
            break;
        case 'd':
            printf("%s\n", D);
            break;
        case 'w':
            printf("%s\n", W);
            break;
        default:
            printf("%s\n", N);
    }
    return 0;
}