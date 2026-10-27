#include <stdio.h>
#include <string.h>

int main()
{
    char myString[101];
    scanf("%s", &myString);
    printf("%s\n", myString);
    int length = strlen(myString);
    printf("%d", length);
    return 0;
}