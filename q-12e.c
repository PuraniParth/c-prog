#include<stdio.h>
#include<math.h>
void main()
{
	int no,digit,arm=0,no1;
	printf("enter number:");
	scanf("%d",&no);
	no1=no;
	while(no!=0)
    {
    	digit=no%10;
    	arm=arm+(digit*digit*digit);
        no=no/10;
    }
    printf("arm=%d",arm);
	if(arm==no1)
	printf("armstrong number");
	else
	printf("not armstrong number");

}
