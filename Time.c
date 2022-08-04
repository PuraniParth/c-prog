#include<stdio.h>
void main()
{
	int s,h,m,ss;
	printf("Enter a second:");
	scanf("%d",&ss);
	h=ss/3600;
	m=(ss%3600)/60;
	s=(ss%3600)%60;
	printf("\033[1;31m");
	printf("%d",h);
	printf("\033[1;37m");
	printf(":");
	printf("\033[1;33m");
	printf("%d",m);
	printf("\033[1;37m");
	printf(":");
	printf("\033[1;34m");
	dprintf("\n\%d",s);
}
