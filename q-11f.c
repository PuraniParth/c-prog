#include<stdio.h>
void main()
{
	int x,i,sum=0;
	printf("enter number:");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==x)
	printf("parfect number");
}
