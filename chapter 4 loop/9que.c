#include <stdio.h>

int main()
{
    int n, prime = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            prime++;
        }
    }
    if (prime == 2)
    {
        printf("%d is a prime Number", n);
    }
    else
    {
        printf("%d is not a prime Number", n);
    }

    return 0;
}