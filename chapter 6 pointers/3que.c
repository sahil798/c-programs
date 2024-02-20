#include <stdio.h>
int change(int *a)
{
    int d = 10 * (*a);
}

int main()
{
    int a = 32;
    printf("The ten times of a variable is %d", change(&a));
    return 0;
}