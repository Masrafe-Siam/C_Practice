//Write a program to sort an array in descending order.


#include<stdio.h>
int main()
{
	int a[]={35,7,99,5,72,23,9,6,10,67},i,j,p;
	for (i=0;i<10;i++)
	{
		printf("%d\t",a[i]);	
	}
	for (i=0;i<10;i++)
	{
	 	for (j=i+1;j<10;j++)
		{
			if (a[i]<a[j])
			{
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}	
	}
	printf("\n\nArray In ascending order-\n\n");
	for (i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
