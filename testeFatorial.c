#include <stdio.h>

unsigned long fatorial(unsigned long n)
{
    if (n == 0)
        return 1;
    else    
        return n * fatorial (n-1);    
}

int main()
{
    unsigned long  x;

    scanf("%u", &x);

    printf("%u", fatorial(x));

    return 0;
}