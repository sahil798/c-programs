#include <stdio.h>

int main()
{
    int physics, chemistry, maths;

    printf("Enter your physics marks\n");
    scanf("%d", &physics);

    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter your maths marks\n");
    scanf("%d", &maths);

    float total = (float)(physics + chemistry + maths) / 3;

    if (total >= 40 && physics >= 33 && chemistry >= 33 && maths >= 33)
    {
        printf("Congratulations! You have passed and your pecentage is %f.\n", total);
    }
    else
    {
        printf("Sorry, you have failed and your percentage is %f. Please try again.\n", total);
    }
    return 0;
}