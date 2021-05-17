#include<stdio.h>
#include<conio.h>
main()
{
int salary[300],i,count=0;

for(i=0;i<300;i++)
{
printf("input salary of employee:");
scanf("%d",&salary[i]);
}
for(i=0;i<300;i++)
{
if(salary[i]>10000&&salary[i]<=15000)
{
count=count+1;
}
}
printf("Number of employees getting salary between 10000-15000=%d",count);
getch();
}

	
