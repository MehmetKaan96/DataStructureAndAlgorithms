#include <bits\stdc++.h>
/*Find single missing element in a sorted Array*/

class Array{
    private:
        int *A;//array itself for storing numbers
        int size;
        int length;
    public:
        Array(int size);
        void create();
        void Display();
        // int findMissingElement(Array *arr);
        //2nd Method for finding missing element
        int findmissingElement(Array *arr);
};

Array::Array(int size)
{
    this->size = size;
    A= new int[size];//created an array of size "size" in heap;
}

void Array::create()
{
    std::cout<<"Enter the number of elements you are going to add"<<std::endl;
    std::cin>>length;
    for (int i = 0; i < length; i++)
    {
        std::cin>>A[i];
    }
}

void Array::Display()
{
    for(int i = 0;i<length;i++)
    {
        std::cout<<"Element of "<<i+1<<" is: "<<A[i]<<std::endl;
    }
        
}

//For Sorted Arrays
// int Array::findMissingElement(Array *arr){
    
//     int sum = 0,n,s;

//     n = arr->A[length-1];//last element of array

//     for (int i = 0; i < arr->length; i++)
//     {
//         sum = sum + arr->A[i];
//     }

//     s = (n*(n+1))/2; // formula of the sum of the first n elements.

//     return s-sum;
// }

//Also For Sorted Arrays
int Array::findmissingElement(Array *arr)
{
    int low = arr->A[0], high = arr->A[length-1],n = arr->length;

    int diff = low-0;
    for (int i = 0; i < n; i++)
    {
        if (arr->A[i]-i != diff)
        {
            return i+diff;
            break;
        }
    }
}

int main()
{
    Array arr(10);
    arr.create();
    // printf("The missing Element is : %d \n", arr.findMissingElement(&arr));
    printf("The missing element is : %d \n",arr.findmissingElement(&arr));
    return 0;
}