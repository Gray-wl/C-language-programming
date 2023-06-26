#include <stdio.h>

// 输出一定数量的偶数
int main() {
    int beign, n;
    scanf("%d%d", &beign, &n);
    if(beign < 0) beign = 0;
    if(beign & 1) beign += 1; // beign & 1 <=> beign % 2
    while(n) {
        printf("%d\n", beign);
        beign += 2;
        n--;
    }
    return 0;
}