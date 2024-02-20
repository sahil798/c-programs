#include <stdio.h>
int area(int a);

int main()
{
    int c;
    printf("Enter the value of c : ");
    scanf("%d", &c);

    printf("the area of square is %d\n", area(c));
    return 0;
}

int area(int a)
{  
    return a * a;
}
