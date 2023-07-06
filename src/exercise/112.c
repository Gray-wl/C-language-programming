#include <stdio.h>

#define good "It is good"
#define omg "OMG"
#define yes "Yes!"

// 按要求输出
int main() {
    char x[5] = {0};
    scanf("%s", x);
    switch(x[0]) {
        case 'a':
            printf("%s\n", good);
            break;
        case 'b':
            printf("%s\n", omg);
            break;
        case 'c':
            printf("%s\n", yes);
            break; 
    }
    return 0;
}