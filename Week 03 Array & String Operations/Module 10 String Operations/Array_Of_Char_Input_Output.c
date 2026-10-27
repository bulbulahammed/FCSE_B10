#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char Arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &Arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%c", Arr[i]);
    }
    return 0;
}