#include<stdio.h>
void main()
{
	int no,i,count=0;
	printf("enter number:");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			count=count+1;
	    }
	}
	if(count!=0)
	printf(" not prime number");
	else
	printf("prime number");
}
