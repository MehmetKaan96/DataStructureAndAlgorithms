#include <iostream>

class Array{
    private:
        int *A;//array itself for storing numbers
        int size;
        int length;
    public:
        Array(int size);
        void create();
        ~Array(){
            delete []A;
            std::cout<<"Array deleted";
        };
        void Display();
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

int main()
{
    Array arr(5);
    arr.create();
    arr.Display();
    return 0;
}