#include<stdio.h>
void main()
{
	int x,y,i,power=1;
	printf("enter base value x:");
	scanf("%d",&x);
	printf("enter power value y:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		power=(x*power);
	}
	printf("power of x and y=%d",power);
}
