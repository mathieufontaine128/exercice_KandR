#include <stdio.h>

int main()
{
	int i = 0; 
	int j, k;
	printf("%d, %d, %d\n" ,i ,j ,k );
	while (i<=10)
	{
	    j = k = 0;
	    while (j<=10-i)
	    {
	        printf("*");
		++j;
	    }
	    printf("%d",i);
    	    while (k<=i)
	    {
	       printf("*");
	       ++k;
	    }		
	    printf("\n");
	    ++i;
	}	
	return 0;
}
