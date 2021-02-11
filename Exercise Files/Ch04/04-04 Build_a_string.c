#include <stdio.h>
#include <string.h>

int main()
{
    char buf [256];
    char first [128];
    char second [128];
    fgets(first,128,stdin);
    fgets(second,128,stdin);
    strcpy(buf, first);
    strcat(buf, second);
    puts(buf);
    return 0;
}
