#include <bits\stdc++.h>

/*
nCr-Combination Formula is:

           n!
        ————————
        r!*(n-r)!

*/

int fact(int n)
{
    if(n == 0)
        return 1;
    return fact(n-1) * n;
}

//nCr with using factorial
int combination(int n,int r)
{
    int t1,t2,t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2*t3);
}
//nCr based on Pascal's Triangle
int Comb(int n, int r)
{
    if(r==0 || n == r)
        return 1;
    return Comb(n-1,r-1) + Comb(n-1,r);
}

int main()
{
    printf("%d ",Comb(5,2));
    return 0;
}