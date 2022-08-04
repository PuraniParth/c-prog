#include<stdio.h>
struct student
{
	char sname[20];
	int roll_no;
	int yofj;
};
void main()
{
	struct	student  s[10];
	int i;
	for(i=0;i<=10;i++)
	{
		printf("enter the student name:");
		scanf("%c",&s[i].sname);
		printf("enter the student roll no:");
		scanf("%d",&s[i].roll_no);
		printf("enter the student yofj:");
		scanf("%d",&s[i].yofj);
		
		}	
} 
