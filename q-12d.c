#include<stdio.h>
void main()
{
	int no,digit,rev=0;
    printf("enter no.:");
    scanf("%d",&no);
    int palindrome=no;
    while(no!=0)
    {
    	digit=no%10;
        rev=(rev*10)+digit;
//        printf("%d",rev);
        no=no/10;
    }
	
    if(palindrome==rev)
    	printf("palindrome number");
    else
   		 printf("not palindrome number");

}   
