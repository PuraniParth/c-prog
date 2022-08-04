#include<stdio.h>
void main()
{
	int no,digit,sum=0;
    printf("enter no.:");
    scanf("%d",&no);
    while(no!=0)
    {
    	digit=no%10;
        no=no/10;
        sum=sum+digit;
    }
    printf("%d",sum);

}   
