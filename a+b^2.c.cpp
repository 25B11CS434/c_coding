#include<stdio.h>
int main()
{
	int a,b,result;
	printf("enter value of a b\n");
	scanf("%d%d",&a,&b);
	result=a*a+2*a*b+b*b;
	printf("a+b^2 is %d\n",result);
	return 0;
}
