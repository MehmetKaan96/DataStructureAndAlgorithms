#include <bits\stdc++.h>

void TOH(int n,int A, int B,int C)
{
    if(n>0)
    {
        //A to C using B
        TOH(n-1,A,C,B);
        printf("from %d to %d \n",A,C);
        TOH(n-1,B,A,C);
    }
}


int main()
{
    TOH(3,1,2,3);
    return 0;
}