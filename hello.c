#include<stdio.h>
void printname(char*name,int count)
{
printf("%03d:%s\n",count+1,name);
count+=1;
if(count<10);
}
int main()
{
 char name[50];
 printf("\n Enter your name:");
 scanf("%s",name);
 printname(name,0);
 return0;
 }
