#include <stdio.h>

int main()
{
    float d,*pd;
    d = 54.5;
    pd = &d;

    printf("%g\n", d);

    *pd = *pd + 10;
    
    printf("%g\n", d);

    return 0;
}