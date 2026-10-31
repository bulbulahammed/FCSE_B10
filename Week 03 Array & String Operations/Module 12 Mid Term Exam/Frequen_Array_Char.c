#include <stdio.h>
#include <string.h>

int main()
{
    char SampleString[10001];
    scanf("%s", SampleString);

    int length = strlen(SampleString);
    int freq[26] = {0};
    for (int i = 0; i < length; i++)
    {
        freq[SampleString[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }
    return 0;
}