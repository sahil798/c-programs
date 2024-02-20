#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks\n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Your grade is A\n");
        break;
    case 8:
        printf("Your grade is B\n");
        break;
    case 7:
        printf("Your grade is C\n");
        break;
    case 6:
        printf("Your grade is D\n");
        break;
    case 5:
        printf("Your grade is E\n");
        break;
    default:
        printf("You are Fail\n");
    }
    return 0;
}