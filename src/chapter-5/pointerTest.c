#include <stdio.h>

int main()
{
    int x = 1;
    int y = 0;
    int z[10];

    int *ip;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("&x = %p\n", &x);
    printf("&y = %p\n", &y);

    ip = &x;
    printf("int *ip = &x\n");
    printf("&ip = %p\n", &ip);

    y = *ip;
    printf("y = *ip\n");
    printf("y = %d\n", y);


    return 0;
}
