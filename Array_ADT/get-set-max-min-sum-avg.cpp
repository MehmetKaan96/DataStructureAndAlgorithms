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
        int Get(Array arr,int index);
        void Set(Array arr,int index,int value);
        int Max(Array arr);
        int Min(Array arr);
        int Sum(Array arr);
        double Avg(Array arr);
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

void Array::Display(Array arr)
{
    for(int i = 0;i<arr.length;i++)
    {
        std::cout<<"Element of "<<i+1<<" is: "<<arr.A[i]<<std::endl;
    }
        
}

int Array::Sum(Array arr){
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total += arr.A[i];
    }
    return total;
}

double Array::Avg(Array arr){
   
    return (float)Sum(arr)/arr.length;
}

int Array::Get(Array arr,int index){
    if(index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void Array::Set(Array arr,int index,int value)
{
    if (index >= 0 && index < arr.length)
    {
        arr.A[index] = value;
    }
}

int Array::Max(Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if(arr.A[i] > max)
        {
            max = arr.A[i];
        }    
    }
    return max;
}

int Array::Min(Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i]<min)
        {
            min = arr.A[i];
        }
        return min;
    }
    
}

int main()
{
    Array arr(5);
    arr.create();
    // arr.Display(arr);
    // printf("%d\n",arr.Get(arr,4));
    // arr.Set(arr,9,96);
    // printf("Max Value: %d\n",arr.Max(arr));
    // printf("Min Value: %d\n",arr.Min(arr));
    // printf("Total Value: %d\n",arr.Sum(arr));
    printf("Average Value: %d\n",arr.Avg(arr));

    return 0;
}