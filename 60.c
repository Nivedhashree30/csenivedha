#include<stdio.h>
void main()
{
	int n,c,a=1,b=0;
	printf("Enter the number of repetations");
	scanf("%d",&n);
	while(n!=0)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
		printf(" %d",c);		
	}
}
