#include <stdio.h>

int main()
{
    int p = 5000;
    int t = 2;
    float r = 7.5;
    int si = (p * r * t) / 100;
    printf("the simple interest is %f",(float) si);
    return 0;
}