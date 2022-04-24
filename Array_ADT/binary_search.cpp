#include <bits\stdc++.h>

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
            printf("Array deleted\n");
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

void sort(Array *arr)
{
    int temp;
    for (int i = 0; i < arr->length; i++)
    {
        for (int j = i+1; j < arr->length;j++)
        {
            if(arr->A[i]>arr->A[j])
        {
            temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
        }
    }
}
//With Loop
int BinarySearch(Array arr,int key)
{
    int low=0,high=arr.length-1;
    
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

//With Recursion
int RBinarySearch(Array arr,int low,int high,int key)
{
    // int low=0,high = arr.length-1;
    while (low <= high)
    {
        int mid = (low+high)/2;
        if (key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            return RBinarySearch(arr,low,mid-1,key);
        else
            return RBinarySearch(arr,mid+1,high,key);
    }
    return -1;
}

int main()
{
    Array arr(10);
    arr.create();
    sort(&arr);
    // printf("İndex of element is: %d ",BinarySearch(arr,23));
    printf("İndex of element is: %d \n",RBinarySearch(arr,0,arr.length-1,6));
    arr.Display();
    return 0;
}