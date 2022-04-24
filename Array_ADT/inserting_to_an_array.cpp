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
        void Append(Array &arr,int x);
        void Insert(Array &arr,int index,int number);
        ~Array(){
            delete []A;
            std::cout<<"Array deleted";
        };
};

void Array::Append(Array &arr, int x)
{
            if (arr.length<arr.size)
            {
                arr.A[arr.length++] = x;
            }   
}

void Array::Insert(Array &arr,int index,int number)
{
  if (index>=0 && index <=arr.length)
  {
      for (int i = length; i > index; i--)
      {
          arr.A[i] = arr.A[i-1];
      }
      arr.A[index] = number;
      arr.length++;
  }
}
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
        std::cout<<"Element of "<<i<<" is: "<<A[i]<<std::endl;
    }
        
}

int main()
{
    Array arr(10);
    arr.create();
    // arr.Append(arr,5);
    arr.Insert(arr,0,4);
    arr.Display();
    return 0;
}