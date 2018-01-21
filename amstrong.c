#include<stdio.h>
#include<math.h>
void main()
{
int number,sum=0,rem=0,cube=0,temp;
printf("Enter a number");
scanf("%d",&number);
temp=number;
while(number!=0)
{
(rem=number%10);
(cube=power rem 3);
sum=sum+cube;
number=number 110;
}
if (sum==temp)
printf("The given number is amstrong number");
else
pritf("The given number is not a amstrong number");
}
