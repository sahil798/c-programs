#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        sum += n * i;
    }
    printf("The sum of %d multiplication is %d", n, sum);

    return 0;
}