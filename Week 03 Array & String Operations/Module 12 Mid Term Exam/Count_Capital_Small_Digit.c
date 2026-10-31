#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char SampleString[10001];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", SampleString);
        int length = strlen(SampleString);
        int TotalCapital = 0;
        int TotalSmall = 0;
        int TotalDigit = 0;
        for (int i = 0; i < length; i++)
        {
            if (SampleString[i] >= 'A' && SampleString[i] <= 'Z')
            {
                TotalCapital++;
            }
            if (SampleString[i] >= 'a' && SampleString[i] <= 'z')
            {
                TotalSmall++;
            }
            if (SampleString[i] >= '0' && SampleString[i] <= '9')
            {
                TotalDigit++;
            }
        }
        printf("%d %d %d\n", TotalCapital, TotalSmall, TotalDigit);
    }
    return 0;
}