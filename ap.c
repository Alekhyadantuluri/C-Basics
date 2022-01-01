#include<Stdio.h>
void main()
{
	int x,y,n,a,l,s;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	n=y/x;
	a=x;
	l=n*a;
	s=(n*(a+l))/2;
	printf("%d",s);
}
