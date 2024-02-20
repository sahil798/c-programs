#include <stdio.h>

int main()
{
    int num;
    printf("The value of num is\n");
    scanf("%d", &num);

    printf("divisibility test returns %d", num % 97);
    return 0;
}