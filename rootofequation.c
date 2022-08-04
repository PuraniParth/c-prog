#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c,D,r1,r2;
        printf("enter the value of a");
        scanf("%d",&a);
        printf("enter the value f b");
        scanf("%d",&b);
        printf("enetr the value of c");
        scanf("%d",&c);

        D=(b*b)-(4*a*c);
        printf("Descriminant=%d",D);
        if(D>0)
            {
            r1=((-b*b)+sqrt(D))/2*a;
            r2=((-b*b)-sqrt(D))/2*a;
            }
        if(D==0)
            {
            r1=((-b*b)/(2*a));
            r1=((-b*b)/(2*a));
            }
        if(D<0)
            {
            r1=((-b*b)/(2*a));
            r2=sqrt(D)/(2*a);
            }
        printf("x=%d",r1);
        printf("y=%d",r2);
}
