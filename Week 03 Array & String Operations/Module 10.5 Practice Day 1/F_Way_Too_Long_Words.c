#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char myChar[101];
    int i = 0;
    while (i < T)
    {
        scanf("%s", myChar);
        int length = strlen(myChar);
        if (length > 10)
        {
            printf("%c%d%c\n", myChar[0], length - 2, myChar[length - 1]);
        }
        else
        {
            printf("%s\n", myChar);
        }
        i++;
    }
    return 0;
}