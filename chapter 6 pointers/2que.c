#include <stdio.h>

int main()
{
    int a = 5;
    int *b = &a;
    printf("The address of a variable is %u\n", &b);
    printf("The value of a variable is %d\n", *b);

    return 0;
}