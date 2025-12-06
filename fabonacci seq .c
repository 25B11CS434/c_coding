#include<stdio.h>
int fibonacci(int i)
{
	if(i<=1)
	{
		return i;
	}
	else
	{
		return fibonacci(i-1)+fibonacci(i-2);
	}
}
int main()
{
	int n,i;
	printf("enter the fibonacci seq:");
	scanf("%d",&n);
	printf("fibonacci seq is");
	for(i=0;i<n;i++)
	{
		printf(" %d ",fibonacci(i));
	}
	return 0;
}

