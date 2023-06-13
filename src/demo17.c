#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int max_int(int n, ...) {
    int ans = INT32_MIN;
    va_list arg;
    va_start(arg, n);
    while(n--) {
        int temp = va_arg(arg, int);
        if(temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("max_int(4, 1, 2, 3, 4) = %d\n", max_int(4, 1, 2, 3, 4));
    printf("max_int(3, -23, -2, 0) = %d\n", max_int(3, -23, -2, 0));
    return 0;
}