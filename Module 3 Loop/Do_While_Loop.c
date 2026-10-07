#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i = 0;
    do
    {
        printf("This is do while loop\n");
        i++;
    } while (i < N);
    return 0;
}