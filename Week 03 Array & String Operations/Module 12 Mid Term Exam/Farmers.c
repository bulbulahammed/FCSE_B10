#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    int Man1, Man2, Day;

    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d", &Man1, &Man2, &Day);
        int TotalMan = Man1 + Man2;
        int NewDay = (Man1 * Day) / (TotalMan);
        int LessDay = Day - NewDay;
        printf("%d\n", LessDay);
    }

    return 0;
}