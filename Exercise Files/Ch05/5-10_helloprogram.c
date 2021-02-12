#include <stdio.h>
#include <stdlib.h>
#define SIZE 64

int main()
{
    char *buf;
    buf = malloc( sizeof(char) * SIZE);
    if(buf == NULL)
    {
        printf("Error: malloc failed.\n");
        return 1;
    }

    printf("Input:");
    fgets(buf, SIZE, stdin);
    printf("Gretings: %s",buf);

    return 0;
}
