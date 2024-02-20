#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number of a\n");
    scanf("%d", &a);

    printf("Enter the number of b\n");
    scanf("%d", &b);

    printf("Enter the number of c\n");
    scanf("%d", &c);

    printf("Enter the number of d\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("A is a greater\n");
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is a greater\n");
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is a greater\n");
    }
    else if (d > a && d > b && d > c)
    {
        printf("D is a greater\n");
    }
    else
    {
        printf("There is no greater number");
    }

    return 0;
}