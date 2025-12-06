#include<stdio.h>
void add()
{
	int a,b,c;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the sum is %d",c);
}
int main()
{
    add();
	return;
}
