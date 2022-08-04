#include<stdio.h>
void main()
{
	int x,i,fact=1;
	printf("enter number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
}
