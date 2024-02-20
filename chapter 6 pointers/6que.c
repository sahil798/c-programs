#include <stdio.h>
void change(int a)
{
    int d = 10 * (a);
}

int main()
{
    int a = 5;
    change(a);
    printf("the value of a is : %d ", a);
    return 0;
}