#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  main(void)
  {
    char arr[50];
    int  flag = 0;
	char ch ;
    printf("enter the string \n");
	gets(arr);


    printf("insert character for calc frequency :  \n");
    scanf("%c",&ch);


  for(int i=0 ;i<strlen(arr) ;i++)
   {
       //printf("%c",arr[i]);

    if(ch == arr[i])
		{
			flag++;
		}

   }

printf("frequency of %c = %d",ch, flag);

return 0;
   }
