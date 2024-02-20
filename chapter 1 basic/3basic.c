#include <stdio.h>

int main()
{
    float c;
    printf("The value of c is : \n");
    scanf("%f", &c);

    float f = (c * 9 / 5) + 32;

    printf("The Celsius temperatrure into fahrenheit is %f", f);
    return 0;
}