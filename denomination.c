#include<Stdio.h>
void main()
{
	int am,x,y,z,a,b,c,d,e,f,g;
	printf("enter amount");
	scanf("%d",&am);
	x=am/2000;
	am=am%2000;
	y=am/500;
	am=am%500;
	z=am/200;
	am=am%200;
	a=am/100;
	am=am%100;
	b=am/50;
	am=am%50;
	c=am/20;
	am=am%20;
	d=am/10;
	am=am%10;
	e=am/5;
	am=am%5;
	f=am/2;
	am=am%2;
	g=am/1;
	printf("2000 notes = %d",x);
	printf("\n500 notes = %d",y);
    printf("\n200 notes = %d",z);
    printf("\n100 notes = %d",a);
    printf("\n50 notes = %d",b);
	printf("\n20 notes = %d",c);
	printf("\n10 notes = %d",d);
	printf("\n5 rupees = %d",e);
	printf("\n2 rupees = %d",f);
	printf("\n1 rupees = %d",g);
	}
	
