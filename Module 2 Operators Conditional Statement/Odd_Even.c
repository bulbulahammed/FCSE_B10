#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if ((num % 2) == 0)
    {
        printf("It's an even number");
    }
    else
    {
        printf("It's an odd number");
    }
    return 0;
}