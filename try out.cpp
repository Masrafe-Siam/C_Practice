#include<stdio.h>
int main()
{

int a,b,add,sub,multiply,division,divisible;
	
	printf ("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    add=a+b;
    sub=a-b;
    multiply=a*b;
    division=a/b;
    divisible=a%b;
    
    printf("Addition Result=%d\n",add);
    
    printf("Substraction Result=%d\n",sub);
   
    printf("Multipication Result=%d\n",multiply);
   
    printf("Division=%d\n",division);
    
	printf("Divisible=%d\n",divisible);
	
	
	
	return 0;
}
