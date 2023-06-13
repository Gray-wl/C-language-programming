#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 1: {
            printf("one\n");
        } break;
        case 2: {
            printf("two\n");
        } break;
        case 3: {
            printf("three\n");
        } break;
        default:
            printf("error\n");
    }
    return 0;
}