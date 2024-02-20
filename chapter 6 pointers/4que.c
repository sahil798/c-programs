#include <stdio.h>
void sum_average(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = (float)(*sum) / 2;
}

int main()
{
    int a, b, sum;
    float average;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    sum_average(a, b, &sum, &average);
    printf("The sum of a and b is %d\n", sum);
    printf("The average of a and b is %f\n", average);

    return 0;
}