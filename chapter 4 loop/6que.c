#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;
    printf("Enter the n number : ");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("The sum of first %d natural number is %d", n, sum);

    return 0;
}