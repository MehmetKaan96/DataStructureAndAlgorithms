#include <iostream>

/*Suppose we have sorted Arrays for these operations */
class Array
{
public:
    int A[10]; // array itself for storing numbers
    int size;
    int length;
};

void Display(Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    
}

Array* Union(Array *arr1, Array *arr2)
{
    Array *arr3 = (Array*)new int[(arr1->length + arr2->length)];
    int i=0,j=0,k=0;
    while (i<arr1->length && j< arr2->length)
    {
        if(arr1->A[i]< arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }   
    }

        for (; i < arr1->length; i++)
            arr3->A[k++] = arr1->A[i];
        for(;j < arr2->length;j++)
            arr3->A[k++] = arr2->A[j];

        arr3->length = k;
        arr3->size = 10;
        
        return arr3;
}

Array* Intersection(Array *arr1, Array *arr2)
{
    Array *arr3 = (Array *) new int[(arr1->length + arr2->length)];
    int i=0,j=0,k=0;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i]<arr2->A[j])
            i++;
        else if(arr2->A[j]< arr1->A[i])
            j++;
        else if(arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
    
}

//returns first_param - second_param 
Array* Difference(Array *arr1, Array *arr2)
{
    Array *arr3 = (Array *) new int[(arr1->length + arr2->length)];
    int i=0,j=0,k=0;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i]<arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j]< arr1->A[i])
            j++;
        else if(arr1->A[i] == arr2->A[j])
        {
            i++;
            j++;
        }
    }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    
    arr3->length = k;
    arr3->size = 10;

    return arr3;


}

int main()
{
    Array arr1 = {{2,9,21,28,35},10,5};
    Array arr2 = {{2,3,9,18,28},10,5};
    Array *arr3;

    arr3 = Union(&arr1,&arr2);
    Display(*arr3);

    arr3 = Intersection(&arr1,&arr2);
    Display(*arr3);

    arr3 = Difference(&arr1,&arr2);
    Display(*arr3);

    return 0;
} 