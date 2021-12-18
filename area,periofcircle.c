#include<stdio.h>
void main()
{
            float radius,pi,area,perimeter;
	printf("enter radius");
	scanf("%f",&radius);	
	pi=3.14;
	area=radius*radius*pi;
	perimeter=2*pi*radius;
	printf("area of the circle with radius %f is: %.2f",radius,area);
	printf("\nperimeter of the circle with radius %f is: %.2f",radius,perimeter); 
}
