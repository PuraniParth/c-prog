#include<stdio.h>
void main()
{
	int no,lastdigit,firstdigit;
	printf("enter number:");
	scanf("%d",&no);
	lastdigit=no%10;
	firstdigit=no;
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
	}
	printf("firstdigit=%d\n",firstdigit);
	printf("lastdigit=%d\n",lastdigit);
	printf("sum=%d",firstdigit+lastdigit);
}
