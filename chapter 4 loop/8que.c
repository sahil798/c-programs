#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of a %d is %d", n, factorial);
    return 0;
}