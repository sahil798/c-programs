#include <stdio.h>

int main()
{
    int length = 45;
    int breadth = 67;

    printf("The area of rectangle is %d\n", length * breadth);

    int Length;
    int Breadth;

    printf("The length of a rectangle is : ");
    scanf("%d", &Length);

    printf("The Breadth of a rectangle is : ");
    scanf("%d", &Breadth);

    printf("The area of rectangle is %d  ", Length * Breadth);

    return 0;
}