#include <stdio.h>
#include <stdlib.h>
void reverse_arr(int arr[] , int size);

int main()
{

    int siz , i;
    printf("enter rhe size of arry \n");
    scanf("%d",&siz);
     int arr1[siz];
    printf("element of arry \n");
    for(i=0 ;i<siz;i++)
    {
        scanf("%d",&arr1[i]);

    }
    reverse_arr(arr1 , siz);
    return 0 ;
}

void reverse_arr(int arr[] ,int size){

   int i;
   for(i=size-1;i>=0;i--)
   {
       printf("%d ",arr[i]);
   }




}
