#include<stdio.h>  
int main()    
{    
int i,fac=1,a;    
printf("Enter a number: ");    
scanf("%d",&a);    
for(i=1;i<=a;i++)
{    
fac=fac*i;    
}
printf("Factorial of %d is: %d",a,fac);    
return 0;  
}
