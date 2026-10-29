#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int myString[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myString[i]);
    }
    int I = 0;
    int J = N - 1;
    int tmp;
    while (I < J)
    {
        tmp = myString[I];
        myString[I] = myString[J];
        myString[J] = tmp;
        I++;
        J--;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", myString[i]);
    }
    return 0;
}