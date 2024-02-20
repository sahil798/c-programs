#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("The sum of %d natural number is %d", a, sum(a));
    return 0;
}