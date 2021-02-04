#include <stdio.h>

int main()
{
    int a;
    for(a=0;a<=20;a++)
        printf("%d\n", a);
    a = -10;
    while( a <= 10)
    {
        printf("%d", a);
        a += 2;
    }
    return 0;

}
