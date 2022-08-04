#include<stdio.h>
void main()
{
	float d,u,a,t;
	printf("Enter value of a velocity:");
	scanf("%f",&u);
	printf("Enter value of acceleration:");
	scanf("%f",&a);
	printf("Enter value of time:");
	scanf("%f",&t);
	d=(u*t)+(a*t*t)/2;
	printf("travel distance:%f",d);
}