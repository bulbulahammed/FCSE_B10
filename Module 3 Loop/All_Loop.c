#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    // For Loop
    for (int i = 0; i < N; i++)
    {
        printf("For Loop\n");
    }
    // While Loop
    int i = 0;
    while (i < N)
    {
        printf("While loop\n");
        i++;
    }
    // Do While Loop
    i = 0;
    do
    {
        printf("Do while loop\n");
        i++;
    } while (i < N);
    return 0;
}