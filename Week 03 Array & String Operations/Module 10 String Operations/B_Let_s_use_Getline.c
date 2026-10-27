#include <stdio.h>

int main()
{
    char myString[1000001];
    fgets(myString, 1000001, stdin);
    int i = 0;
    while (myString[i] != '\\')
    {
        printf("%c", myString[i]);
        i++;
    }
    return 0;
}