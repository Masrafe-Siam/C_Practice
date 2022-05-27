#include<stdio.h>
    int main()
    {
       int i,hour,overtime;
       for(i=1;i<=10;i++)
       {
       	printf("Enter the working hour :");
       	scanf("%d",&hour);
       	if(hour>40)
       	{
       		overtime=(hour-40)*12;
       		printf("\n%d Rs. is the overtime pay of employee\n", overtime);
		   }
		   else
		   printf("\nThis employ has not done overtime.\n");
	   }
        return 0;
    }
