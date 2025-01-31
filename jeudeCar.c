#include <stdio.h>

int main()
{
	int i, j;
	i = 0;
	while (i<=10){
		j = 0;
		while (j<=10-i){
			printf("*");
			++j;
		}
		printf("%d\n",i);
		++i;
	}
	return 0;
}
