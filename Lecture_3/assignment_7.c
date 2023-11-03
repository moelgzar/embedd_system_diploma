#include <stdio.h>
int  main(void)
  {
    int n = 50  , num ;

    printf("enter the number of element :  \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {   printf("enter number [%d] : ",i);
        scanf("%d",&arr[i]);

    }

    printf("insert number for searching :   \n");
    scanf("%d",&num);
   
   
   for(int i=0;i<n;i++)
   {
		if(num == arr[i])
		{
			printf("it found at location : %d ",i);
			break;
		}
	   
   }
   


return 0;
   }
