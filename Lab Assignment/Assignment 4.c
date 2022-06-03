#include <stdio.h>
int main() 
{
   int a, b, rows,c=2;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (a = 2; a <= rows; a++)
    {
      for (b = 1; b <= a; b++)
	   	{ 
        	printf("%d ", c++);
      	}
      printf("\n");
   }
   return 0;
}

