#include<stdio.h>
void main()
{
	float p,t,r,simple_interest;
	printf("enter p,t,r");
	scanf("%f%f%f",&p,&t,&r);
	simple_interest=p*t*r/100;
	printf("simple interest when principal %.2f, rate of interest %.2f and time %.2f is: %.2f",p,r,t,simple_interest);
}
