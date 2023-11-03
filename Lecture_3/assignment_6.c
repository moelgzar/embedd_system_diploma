#include <stdio.h>
int  main(void)
  {
    int n = 50  , num , pos , r;

    printf("enter the number of element :  \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {   printf("enter number [%d] : ",i);
        scanf("%d",&arr[i]);

    }

    printf("insert number :   \n");
    scanf("%d",&num);
    printf("chose position :  \n");
    scanf("%d",&pos);
    n++;
	for(int i=n;i > pos;i--)
	{
		arr[i] = arr[i-1];
	}

	arr[pos] = num;


 for(int i=0;i<n;i++)

    {
        printf("%d ",arr[i]);


    }


return 0;
   }
