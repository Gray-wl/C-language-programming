#include <stdio.h>

#define MAX_N 100

// 二分折半查找
int binary_search(int *arr, int n, int x) {
    int head = 0, tail = n - 1, mid;
    while(head <= tail) {
        mid = (head + tail) >> 1;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    int arr[MAX_N + 5], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    while(~scanf("%d", &x)) {
        printf("search(%d) : %d\n", n, binary_search(arr, n, x));
    }
    return 0;
}