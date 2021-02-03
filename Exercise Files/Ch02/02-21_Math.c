#include <stdio.h>
#include <math.h>

int main()
{
    float a,b;
    printf("input first number: ");
    scanf("%f",&a);
    printf("input second number: ");
    scanf("%f",&b);
    printf("adding %f\n", a+b);
    printf("subtracting %f\n", a-b);
    printf("multiplying %f\n", a*b);
    printf("dividing %f\n", a/b);
    printf("%f^%f is %f\n", a,b,pow(a,b));
    printf("sqrt of %f is %f\n", a,sqrt(a));
    printf("sqrt of %f is %f\n", b,sqrt(b));
    return 0;
}
