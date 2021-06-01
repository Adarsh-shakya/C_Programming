#include<stdio.h>
void main()
{
int a,b,and,or,xor;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
and=a&b;
or=a|b;
xor=a^b;
printf("and=%d\n",and);
printf("or=%d\n",or);
printf("xor=%d",xor);
}