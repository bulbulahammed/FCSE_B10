#include <stdio.h>
#include <string.h>

int main()
{
    char StringOfNum[1000001];
    scanf("%s", StringOfNum);
    int length = strlen(StringOfNum);
    int sum = 0;
    int i = 0;
    while (i < length)
    {
        sum += StringOfNum[i] - '0';
        i++;
    }
    printf("%d", sum);
    return 0;
}