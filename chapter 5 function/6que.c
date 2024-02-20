#include <stdio.h>
int fibonaci(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return fibonaci(a - 1) + fibonaci(a - 2);
    }
}
int main()
{
    int num;
    printf("Enter the value of num : ");
    scanf("%d", &num);

    printf("%d", fibonaci(num));

    return 0;
}