#include<stdio.h>
void main()
{
	int hour,m,min,minutes;
	printf("enter hours and minutes");
	scanf("%d%d",&hour,&min);
	m=60*hour;
	minutes=m+min;
	printf("total minutes = %d",minutes);
}
