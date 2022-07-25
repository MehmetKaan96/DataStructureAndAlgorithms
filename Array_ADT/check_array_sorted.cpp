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
    void insertToSortedArray(Array *arr, int n);
    bool isSorted(Array *arr);
    void negativeOnTheLeft(Array *arr);
    void Swap( int *x, int *y);
};

Array::Array(int size)
{
    this->size = size;
    A = new int[size]; // created an array of size "size" in heap;
}

void Array::Swap( int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Array::negativeOnTheLeft(Array *arr)
{
    int i = 0;
    int j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }
}

bool Array::isSorted(Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
            return false;
        return true;
    }
}

void Array::insertToSortedArray(Array *arr, int n)
{
    int i = arr->length - 1;

    while (arr->A[i] > n)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = n;
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

int main()
{
    Array arr(5);
    arr.create();
    // arr.insertToSortedArray(&arr,18);
    // std::cout<<arr.isSorted(&arr)<<std::endl;
    arr.negativeOnTheLeft(&arr);
    arr.Display(arr);

    return 0;
}