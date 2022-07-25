#include <iostream>


class Array{
    private:
        int *A;//array itself for storing numbers
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
        void Reverse(Array *arr);
        void LeftShift(Array arr);
        void LeftRotate(Array arr);
        void RightShift(Array arr);
        void RightRotate(Array arr);
};

Array::Array(int size)
{
    this->size = size;
    A= new int[size];//created an array of size "size" in heap;
}

void Array::Reverse(Array *arr){
   
    int i,j;
    for (i = 0,j=arr->length-1; i < j; i++,j--)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
        
    }
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

void Array::Display(Array arr)
{
    for(int i = 0;i<arr.length;i++)
    {
        std::cout<<"Element of "<<i+1<<" is: "<<arr.A[i]<<std::endl;
    }
        
}

void Array::LeftShift(Array arr){
    for (int i = 0; i < arr.length-1; i++)
    {
        arr.A[i] = arr.A[i+1];
    }
        arr.A[length-1] = 0;
}

void Array::LeftRotate(Array arr){
    int temp = arr.A[0];
    for (int i = 0; i < arr.length-1; i++)
    {
        arr.A[i] = arr.A[i+1];
    }
        arr.A[length-1] = temp;
}

void Array::RightShift(Array arr){
    for (int i = arr.length-1; i > 0; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
        arr.A[0] = 0;
}

void Array::RightRotate(Array arr){
    int temp = arr.A[arr.length-1];
    for (int i = arr.length-1; i > 0; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
        arr.A[0] = temp;
}

int main()
{
    Array arr(5);
    arr.create();
    arr.Reverse(&arr);
    // arr.LeftShift(arr);
    // arr.LeftRotate(arr);
    // arr.RightShift(arr);
    // arr.RightRotate(arr);
    arr.Display(arr);

    return 0;
}