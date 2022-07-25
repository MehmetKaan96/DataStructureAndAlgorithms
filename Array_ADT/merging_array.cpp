#include <iostream>

class Array
{
private:
    int *A; // array itself for storing numbers
    int size;
    int length;

public:
    Array(int size);
    void create();
    // ~Array(){
    //     delete []A;
    //     std::cout<<"Array deleted";
    // };
    void Display(Array arr);
    Array* merge(Array *arr1, Array *arr2);
    int getLength();
    int getSize();
};

Array::Array(int size)
{
    this->size = size;
    A = new int[size]; // created an array of size "size" in heap;
}

int Array::getSize(){
    return size;
}

int Array::getLength()
{
    return length;
}

void Array::create()
{
    std::cout << "Enter the number of elements you are going to add" << std::endl;
    std::cin >> length;
    for (int i = 0; i < length; i++)
    {
        std::cin >> A[i];
    }
}

void Array::Display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        std::cout << "Element of " << i + 1 << " is: " << arr.A[i] << std::endl;
    }
}

Array* Array::merge(Array *arr1, Array *arr2)
{
    int *C = new int[sizeof(arr1->length+arr2->length)];
    int i=0,j=0,k=0;

    while (i<arr1->length && j< arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            C[k++] = arr1->A[i++];
        else
            C[k++] = arr2->A[j++];
    }

    for (; i < arr1->length; i++)
    {
        C[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        C[k++] = arr2->A[j];
    }

    for (int m = 0; m < (arr1->length+arr2->length); m++)
    {
        std::cout<<C[m]<<std::endl;
    }
    
}

int main()
{
    Array arr(5);
    arr.create();
    Array arr2(5);
    arr2.create();
    std::cout<<std::endl;
    arr2.merge(&arr,&arr2);
    
    
    // arr.Display(arr);

    return 0;
}