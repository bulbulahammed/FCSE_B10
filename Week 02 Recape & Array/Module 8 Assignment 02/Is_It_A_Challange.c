#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        while (N <= 0)
        {
            printf("%d ", N);
            N++;
        }
    }
    return 0;
}