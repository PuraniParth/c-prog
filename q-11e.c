#include<stdio.h>
void main()
{
	int no,i;
	printf("enter number of array elements:");
	scanf("%d",&no);
	int array[no];
	for(i=0;i<no;i++)
	{
		printf("enter array elements:");
		scanf("%d",&array[i]);
	}
	int sum=0;
	float avg;
		for(i=0;i<no;i++)
	{
		sum=sum+array[i];
		avg=(float)sum/no;
	}
	printf("sum=%d,average=%.2f",sum,avg);
}
