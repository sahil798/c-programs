#include <stdio.h>
void printstar(int n)
{
    printf("calling factorial %d\n", n);
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    else
    {
        printstar(n - 1);
    }

    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }

    printf("\n");
}
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    printstar(a);
    return 0;
}