#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks: \n");
	scanf("%d", &marks);
	
	if(marks>30 && marks<=100){
		printf("passed");}
		
		else if(marks<=30 && marks>=0){
			printf("failed");
		}
		else{
			printf("enter the valid marks");
			
		}
		return 0;
	}
	

