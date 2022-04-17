#include <bits\stdc++.h>

int sumofNTerms(int n)
{
    if(n>0)
    {
        return sumofNTerms(n-1)+n;
    }
    else 
        return 0;
}

int main()
{
    printf("%d ", sumofNTerms(7));
    return 0;
}