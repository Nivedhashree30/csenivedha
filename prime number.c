#include<stdio.h>
int main()
{
 int low,high,flag;
 printf("Enter 2 numbers(intervals):");
 scanf("%d%d",&low,&high);
 printf("print number between%d and %d are:");low high);
 while(low<high)
 {
 flag=0;
 for(i=2;i<=low/2;++i)
 {
 if(low %i==0)
 {
  flag=1;
  break;
  }
  }
