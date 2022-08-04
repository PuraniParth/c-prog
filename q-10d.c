#include<stdio.h>
void main()
{

	float sum=0,i,n;
	printf("enter number:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
		printf("sum of series=%.2f",sum);
}
