#include <bits\stdc++.h>

double e(int x, int n)
{
    double r;
    static double p=1,f=1;
    if(n == 0)
        return 1;
    else
    {
        r = e(x,n-1);
        p *= x;
        f *= n;
        return r + (p/f);
    }
    
}

int main()
{
    printf("%lf ",e(3,10));
    return 0;
}