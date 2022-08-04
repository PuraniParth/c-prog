#include<stdio.h>
void main()
{
    int bs,hra,da,gs;
    printf("Enter Basic Salary:");
    scanf("%d",&bs);
    if(bs>=10000 && bs<20000)
    {
        hra=bs*20/100;
        da=bs*80/100;
    }
    else if(bs>=20000 && bs<30000)
    {
        hra=bs*30/100;
        da=bs*90/100;
    }
    else if(bs>=30000)
    {
        hra=bs*35/100;
        da=bs*95/100;
    }
    else
    {
        hra=0;
        da=0;
    }
    gs=bs+hra+bs;
    printf("\nHRA:%d",hra);
    printf("\nDA:%d",da);
    printf("\nGross Salary:%d",gs);
}   
