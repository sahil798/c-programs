#include <stdio.h>

int main()
{
    int i = 2;
    int *p = &i;
    int **j = &p;
    printf("The value of i is %d\n", **j);
    return 0;
}