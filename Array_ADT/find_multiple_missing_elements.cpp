#include <bits\stdc++.h>

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(int size);
        void Create();
        // void findMultipleMissingElements(Array *arr);
        std::vector<int> findMultipleMissingElements(Array *arr);
};

Array::Array(int size)
{
    this->size = size;
    A = new int[size];
}

void Array::Create()
{
    printf("Please enter the number of elements you would like to add : \n");
    std::cin>>length;

    for (int i = 0; i < length; i++)
        std::cin>>A[i];   
}

// void Array::findMultipleMissingElements(Array *arr)
// {   
//     //vector for missing values
//     std::vector<int> missing_values;

//     //first element     
//     int low = arr->A[0];

//     //Last element
//     int high = arr->A[length-1];

//     //length of array
//     int n = arr->length;

//     //difference between value and their index
//     //initialized with first element of the array
//     int diff = arr->A[0]-0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr->A[i]-i != diff)
//         {
//             missing_values.push_back(diff+i);
//             diff = arr->A[i]-i;
//         }
        
//     }
    
//    for(int i : missing_values)
//     std::cout<<i<<std::endl;
    
// }
std::vector<int> Array::findMultipleMissingElements(Array *arr)
{   
    //vector for missing values
    std::vector<int> missing_values;

    //first element     
    int low = arr->A[0];

    //Last element
    int high = arr->A[length-1];

    //length of array
    int n = arr->length;

    //difference between value and their index
    //initialized with first element of the array
    int diff = arr->A[0]-0;

    for (int i = 0; i < n; i++)
    {
        if (arr->A[i]-i != diff)
        {
            missing_values.push_back(diff+i);
            diff = arr->A[i]-i;
        }
        
    }
    
  return missing_values;
    
}

int main()
{
    Array arr(10);
    arr.Create();
    // arr.findMultipleMissingElements(&arr);
    for(int values : arr.findMultipleMissingElements(&arr))
        std::cout<<values<<std::endl;
    return 0;
}