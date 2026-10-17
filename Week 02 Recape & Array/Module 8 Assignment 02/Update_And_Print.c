#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X, Y;
    scanf("%d %d", &X, &Y);

    for (int i = N - 1; i >= 0; i--)
    {
        if (i == X)
        {
            A[i] = Y;
        }
        printf("%d ", A[i]);
    }
    return 0;
}

// 50 40 30 100 10