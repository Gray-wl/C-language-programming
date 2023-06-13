#include <stdio.h>

int main() {
    int n;
    int f1 = 1, f2 = 1, f3;
    int i;
    printf("请输入您想要求的项数：");
    scanf("%d", &n);
    if(1 == n) {
        f3 = 0;
    } else if(2 == n || 3 == n) {
        f3 = 1;
    } else {
        for(i = 3; i < n; ++i) {
            f3 = f1 + f2;
            f1 = f2;
            f2= f3;
        }
    }
    printf("%d\n", f3);
    return 0;
}