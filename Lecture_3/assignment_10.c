#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  main(void)
  {
    char arr[50] ;
	int temp;
	char ch ;
    printf("enter the string \n");
    gets(arr);

	for(int i=0;i<strlen(arr)/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[strlen(arr)-i-1];
        arr[strlen(arr)-i-1] =temp;

    }


        printf("reverse string is %s",arr);



return 0;
   }
