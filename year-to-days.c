#include<stdio.h>
void main()
{
int n,d,m,y,r;
printf("enter the value days:");
scanf("%d",&n);
y=n/356;
r=n%356;
m=r/30;
d=r%30;
printf("yaer=%d\nmounth=%d\ndays=%d",y,m,d);							
}