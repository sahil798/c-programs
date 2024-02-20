#include <stdio.h>

int main()
{
    int n, i = 1, prime = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n % i == 0)

        {
            prime++;
        }
        i++;
    }
    if (prime == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}