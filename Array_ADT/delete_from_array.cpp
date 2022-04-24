#include <iostream>

class Array{
    private:
        int *A;//array itself for storing numbers
        int size;
        int length;
    public:
        Array(int size);
        void create();
        void Display();
        int Delete(Array &arr,int index);
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

int Array::Delete(Array &arr,int index)
{
    int x = 0;
    if (index >=0 && index <= arr.length)
    {
        x = arr.A[index];
        for (int i = index; i < arr.length-1; i++)
            arr.A[i] = arr.A[i+1];
        arr.length--;
        return x;
    }
    return 0;
}

void Array::Display()
{
    for(int i = 0;i<length;i++)
    {
        std::cout<<"Element of "<<i+1<<" is: "<<A[i]<<std::endl;
    }
        
}

int main()
{
    Array arr(10);
    arr.create();
    printf("Silinen index'teki eleman: %d\n",arr.Delete(arr,4));
    arr.Display();
    return 0;
}