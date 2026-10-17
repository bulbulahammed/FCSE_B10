#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int V;
    int Psum = 0;
    int Nsum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V);
        if (V > 0)
        {
            Psum = Psum + V;
        }
        if (V < 0)
        {
            Nsum = Nsum + V;
        }
    }
    printf("%d %d", Psum, Nsum);
    return 0;
}