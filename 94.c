#include<stdio.h>
int main()
{
int a[20],n,k,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("%d",a[k-1]);
}
