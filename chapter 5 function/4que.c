#include <stdio.h>
float faren(float c)
{
    float d = (c * 9 / 5) + 32;
    return d;
}
int main()
{
    float celsius;

    printf("Enter the celsius temperature : ");
    scanf("%f", &celsius);

    printf("Celsius temperature into farenheit is %f", faren(celsius));

    return 0;
}