#include <bits\stdc++.h>

int F[10];
//Memoizatin method
int fibonacci(int n)
{
    if(n<= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
            F[n-2] = fibonacci(n-2);
        if (F[n-1] == -1)
            F[n-1] = fibonacci(n-1);
        F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

//Recursive Method
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-2) + fib(n-1);
}


int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    printf("%d ",fibonacci(7));
    for(int x : F)
        printf("%d ", x);
    return 0;
}