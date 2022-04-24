#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5] = {0};//will be created inside stack

    int *p1,*p2;
    /*In C language in order to create an array in heap
      we use "malloc()" function
    */
   /*In C Lang.*/ p1 = (int *)malloc(5*sizeof(int));//creates an array of size 5 in Heap

   p1[0] = 3;
   p1[1] = 5;
   p1[2] = 7;
   p1[3] = 11;
   p1[4] = 9;

   for (int i = 0; i < 5; i++)
   {
       printf("%d ", p1[i]);
   }
   
    /*In C++ language in order to create an array in heap
      we use "new" keyword 
    */
    // /*In C++ Lang.*/p2 = new int[5];//creates an array of size 5 in Heap
    p2 = new int[5];

    p2[0] = 2;
    p2[1] = 4;
    p2[2] = 6;
    p2[3] = 8;
    p2[4] = 10;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",p2[i]);
    }
    

    return 0;
}