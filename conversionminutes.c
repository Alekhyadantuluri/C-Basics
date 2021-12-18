#include<stdio.h>
void main()
{
	int minutes,hours,minute;
	printf("enter minutes");
	scanf("%d",&minutes);
	hours=minutes/60;
	minute=minutes%60;
	printf("conversion of %d minutes into hours and minutes is:%d hours and %d minutes",minutes,hours,minute);
}
