#include<stdio.h>
void main()
{
	int x,y,sum,diff,divi,mul,rem;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	sum=x+y;
	diff=x-y;
	mul=x*y;
	divi=x/y;
	rem=x%y;
	printf("%d+%d=%d",x,y,sum);
	printf("\n%d-%d=%d",x,y,diff);
	printf("\n%d*%d=%d",x,y,mul);
	printf("\n%d/%d=%d",x,y,divi);
    printf("\n%d % %d=%d",x,y,rem);
    
}
