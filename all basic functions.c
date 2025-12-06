#include<stdio.h>
int main()
{
	int a; 
	float b;
	char ch;
	char str[50];
	
	printf("enter an integer :");
	scanf("%d",&a);
	
	printf("enter a float :");
	scanf("%f",&b);
	
	printf("enter a character :");
	scanf(" %c",&ch);
	
	printf("enter a string :");
	scanf(" %s",str);
	
	printf("\n you enter \n");
	printf("integer: %d\n",a);
	printf("float: %.2f\n",b);
	printf("character: %c\n",ch);
	printf("string: %s\n",str);
	
	return 0;
}
