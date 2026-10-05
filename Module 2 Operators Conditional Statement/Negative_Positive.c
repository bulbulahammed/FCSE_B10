#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("It's a positive number");
    }
    else
    {
        printf("It's a negative number");
    }
    return 0;
}