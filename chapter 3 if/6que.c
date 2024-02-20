#include <stdio.h>

int main()
{
    char c;
    printf("enter the character : ");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
    {
        printf("%c is a lowercase\n", c);
    }
    else
    {
        printf("%c  is not a lowercase\n", c);
    }
    return 0;
}