#include <stdio.h>

int fac(int n) {
    if(n == 1) return n;
    return n * fac(n - 1);
}

int main() {
    int n;
    while(~scanf("%d", &n)) {
        printf("(%d)! = %d\n", n, fac(n));
    }
    return 0;
}