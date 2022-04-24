#include <iostream>

class Array{
    public:
        int *A;//array itself for storing numbers
        int size;
        int length;
        Array(int size);
        void create();
        void Display();
        ~Array(){
            delete []A;
            std::cout<<"Array deleted";
        };
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

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(Array arr,int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

int LSearchTransposition(Array *arr,int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int LSearchMoveToHead(Array *arr,int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int main()
{
    Array arr(10);
    arr.create();
    arr.Display();
    printf("%d ",LinearSearch(arr,4));
    // printf("%d ",LSearchTransposition(&arr,4));
    // printf("%d ",LSearchMoveToHead(&arr,4));
    return 0;
}