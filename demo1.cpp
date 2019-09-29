#include<stdio.h>
int main()
{
    int *a;
    int b = 4;
    a = &b;
    printf("%d\n", (*a) + b);
    return 0;
}
