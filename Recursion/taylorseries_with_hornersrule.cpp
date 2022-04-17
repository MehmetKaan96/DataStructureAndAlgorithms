#include <stdio.h>

double e(int x, int n)
{   
    static double s = 1;
    if(n == 0)
        return s;
    s = 1+x*s/n;
    return e(x,n-1);
}

int main()
{
    printf("%lf ", e(3,10));
    return 0;
}