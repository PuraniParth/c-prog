#include<stdio.h>
void main()
{
	int i,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0 && i%3!=0)
		printf("%d,",i);
	}
}
