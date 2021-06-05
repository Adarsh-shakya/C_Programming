#include<stdio.h>
void main()
{
int a ,hour,r,sec,mint;
printf("enter the value of secand:");
scanf("%d",&a);
hour=a/3600;
r=a%3600;
mint=r/60;
sec=r%60;
printf("hour=%d\nmint=%d\nsec=%d",hour,mint,sec);
}