#include<stdio.h>
main()
{
	double fahrenheit,centigrade;
	printf("Enter temperature in fahrenheit:");
	scanf("%lf",&fahrenheit);
	centigrade=(5.0/9.0)*(fahrenheit-32);
	printf("Temperature:%f ",centigrade);
	return 0;
}
