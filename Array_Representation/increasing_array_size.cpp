#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*For C language*/
    // int *p ,*q;

    // p=(int *)malloc(5*sizeof(int));
    // p[0]= 1;p[1]= 3;p[2]= 5;p[3]= 7;p[4]= 9;
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     printf("%d \n",p[i]);
    // // }

    // q=(int *) malloc(10*sizeof(int));

    // for (int i = 0; i < 5; i++)
    //     q[i] = p[i];
    
    // free(p);
    // p=q;
    // q=NULL;

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",p[i]);
    //     /*1 3 5 7 9 (rest is garbage value)*/
    // }
    
    /*For C++ Language*/

    int *p,*q;

    p = new int[5];
    p[0]= 1;p[1]= 3;p[2]= 5;p[3]= 7;p[4]= 9;
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d \n",p[i]);
    }
    printf("\n");
    q= new int[10];
    for (size_t i = 0; i < 5; i++)
        q[i] = p[i];
    
    delete []p;
    p=q;
    q=nullptr;

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d \n",p[i]);
    }
    delete []p;
    p=nullptr;
    return 0;
}