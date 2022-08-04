#include<stdio.h>
void main()
{
    float a,bs,hra,da,gs;

    printf("Enter Value");
    scanf("%f",&a);

    if(a<30000)
    {
        if(a<20000)
        {
            if(a<10000)
            {
                printf("Invalid Input");
            }
            else
            {   bs=a;
                hra=0.2*bs;
                da=0.8*bs;
                gs=bs+hra+da;
                printf("Gross Salary = %f ",gs);
            }
        }
        else
        {
            bs=a;
            hra=0.25*bs;
            da=0.85*bs;
            gs=bs+hra+da;
            printf("Gross Salary =%f ",gs);
        }
    }
    else
    {
        bs=a;
        hra=0.25*bs;
        da=0.95*bs;
        gs=bs+hra+da;
        printf("Gross Salary =%f ",gs);
    }
}