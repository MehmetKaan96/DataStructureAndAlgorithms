#include <bits\stdc++.h>

int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}

int main()
{
    printf("%d ",fun(95));
    return 0;
}