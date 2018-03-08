#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the numbers:");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if((r%2)!==0)
printf("The odd digits is %d",r);
n=n/10;
return 0;
}
