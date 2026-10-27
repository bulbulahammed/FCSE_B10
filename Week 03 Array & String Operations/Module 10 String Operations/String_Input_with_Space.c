#include <stdio.h>

int main()
{
    char MyName[50];
    fgets(MyName, 15, stdin);
    printf("%s", MyName);
    return 0;
}