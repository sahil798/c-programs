#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter the n number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of first %d natural number is %d", n, sum);

    return 0;
}