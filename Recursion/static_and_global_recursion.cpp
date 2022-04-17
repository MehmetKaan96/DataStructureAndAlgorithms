#include <bits\stdc++.h>
using namespace std;
int x = 0;
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}
int fun2(int n)
{
    
    if (n>0)
    {
        x++;
        return fun2(n-1)+x;
    }
    else
        return 0; 
}

int main()
{
    int r,k;
    //r = fun(5);
    k = fun2(5);
    //printf("%d ", r);
    printf("%d ",k);
    return 0;
}