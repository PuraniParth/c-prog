#include<stdio.h>

void main()
{
   int inputsecond,minute,hours,second,remainingsecond;

    printf("enter the value of second ");
    scanf("%d",&inputsecond);
    
    hours=inputsecond/360;
    remainingsecond=inputsecond-(hours*3600);
    minute=remainingsecond/60;
    remainingsecond=remainingsecond-(minute*60);
    second=remainingsecond;
    
    printf("%d:%d:%d\n",hours,minute,second);
}