#include <stdio.h>
#include <inttypes.h>

int main() {
    int a = 123;
    char ch = 'a';
    double pi = 3.14;
    // 单位：字节
    printf("sizeof(a) = %lu, sizeof(ch) = %lu, sizeof(pi) = %lu\n", sizeof(a), sizeof(ch),sizeof(pi));
    printf("int = %lu, char = %lu, float = %lu, double = %lu\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
    //32位整型极大值
    printf("%d\n", INT32_MAX);
    printf("unsigned int = %lu\n", sizeof(unsigned int));
    printf("long = %lu\n", sizeof(long));
    return 0;
}