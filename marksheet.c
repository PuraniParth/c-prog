#include<stdio.h>
void main()
{
	float Phy,Che,Maths,Eng,Comp,avg;
	printf("Enter Physics marks  :");
	scanf("%f",&Phy);
	printf("Enter Chemistry marks:");
	scanf("%f",&Che);
	printf("Enter Maths marks    :");
	scanf("%f",&Maths);
	printf("Enter English marks  :");
	scanf("%f",&Eng);
	printf("Enter Computer marks :");
	scanf("%f",&Comp);
	avg=(Phy+Che+Maths+Eng+Comp)/5;
	printf("Persantage:%f",avg);
}