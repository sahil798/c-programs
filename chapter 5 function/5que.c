#include <stdio.h>
float force(float m)
{
    float a = 9.8 * m;
    return a;
}

int main()
{
    float mass;
    printf("Enter The value of mass in kgs : ");
    scanf("%f", &mass);

    printf("The value of force in newton is %f : ", force(mass));

    return 0;
}