#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (!n) {
        printf("FOOLISH\n");
    } else if(n < 60) {
        printf("FAIL\n");
    } else if(n < 75) {
        printf("MEDLUM\n");
    } else if (n <= 100) {
        printf("GOOD\n");
    }
    return 0;
}