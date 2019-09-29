#include<stdio.h>
int main()
{
    int *a;
    int b = 4;
    a = &b;
    printf("%d\n", (*a) + b);
    printf("Hello, world!\n");
    printf("Hello, world!\n");
    return 0;
}
