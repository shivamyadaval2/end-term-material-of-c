#include<stdio.h>
int main()
{
	int n;
	do{
		printf("enter a number divisible by 7:");
		scanf("%d", &n);
		
		if(n%7!=0){
			printf("%d is not divisible by 7\n");
		}
		
		if(n%7==0){
			printf("%d is multiple of 7", n);
			break;
		}
		
		
	}
	while(1);
	printf("thank you");
	
	return 0;
}
