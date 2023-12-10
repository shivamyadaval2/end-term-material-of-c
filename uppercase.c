#include<stdio.h >
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c", &ch);
	
	if(ch >='A' && ch <='Z'){
		printf("character is uppercase");
	}
	else{
		printf("character is lower case");
	}
	return 0;
}
