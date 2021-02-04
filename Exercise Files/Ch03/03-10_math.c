#include <stdio.h>

void evaluate(int a);

int main()
{
    evaluate(11);
    return 0;
}

void evaluate(int a)
{
    if ( a == 10 )
    {
        printf("equal");
    }
    else if ( a > 10)
    {
        printf("greater than\n");
    }
    else if{
        printf("less than\n");
    }
}
