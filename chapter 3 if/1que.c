#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("your grade is A\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("your grade is B\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("your grade is C\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("your grade is D\n");
    }
    else
    {
        printf("You are Fail");
    }

    return 0;
}