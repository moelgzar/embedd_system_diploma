#include <stdio.h>
#include <stdlib.h>
void Unique_num_in_arry(int arr[],int size);

int main()
{
    int arr1[] = {4,2,5,2,5,7,4};
    int siz;
    siz = sizeof(arr1)/sizeof(arr1[0]);
    Unique_num_in_arry(arr1,siz  );


    return 0;
}
void Unique_num_in_arry(int arr[],int size)
{
    int i, j;
    for(i=0; i<size; i++)
    {

        for(j=0; j<size; j++)
        {
            if(arr[i] == arr[j] && i!= j)
            {
                break;
            }

        }
 if(j == size)
            {
                printf("unique number is %d ",arr[i]);
            }


    }


}

