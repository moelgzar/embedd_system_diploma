#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  main(void)
  {
    char arr[50] ;
	int flag = 0;
	char ch ;
    printf("enter the string \n");
    gets(arr);




  for(int i=0 ;arr[i]!='\0' ;i++)
   {
        flag++;
   }

printf("the length =  %d",flag);

return 0;
   }
