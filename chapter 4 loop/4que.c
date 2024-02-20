#include <stdio.h>

int main()
{
    int n, i = 10;
    printf("Enter the value of n :");
    scanf("%d", &n);

    while (i)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
        i--;
    }

    return 0;
} 