#include<stdio.h>
int main()
{
	void dectory(int v,int b);
	return 0;
}
void dectory(int b,int v)
{
	int i=0,a[20];
	int j;
	while(v!=0)
	{
		a[i]=v%b;
		v=v/b;
		i++;
		}
		for(j=i-1;j>=0;j--)
		{
			printf("%d",a[j]);
			}	
			
}


	
