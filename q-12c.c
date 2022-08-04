#include<stdio.h>
void main()
{
	int no,digit;
    printf("enter no.:");
    scanf("%d",&no);
    while(no!=0)
    {
    	digit=no%10;
        no=no/10;
        printf("%d",digit);
    }
}   
