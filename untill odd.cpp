#include<stdio.h>
int main()
{
	int n;
	
		do{
			printf("enter an odd number:");
			scanf("%d", &n);
			printf("%d\n", n);
			
			if(n % 2 != 0)
			{
				printf("%d is an odd number", n);
				break;
			}}
			while(1);
		
		

	return 0;}
