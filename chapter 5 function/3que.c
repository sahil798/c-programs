#include <stdio.h>
float sum(int a, int b, int c)
{
    float d = (float)(a + b + c) / 3;
    return d;
}

int main()
{
    int a, b, c;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    printf("Enter the value of c : ");
    scanf("%d", &c);

    printf("The sum of %d %d and %d is %f", a, b, c, sum(a, b, c));
    return 0;
}