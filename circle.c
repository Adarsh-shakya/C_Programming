#include<stdio.h>
void main()
{
float r,a,c,d;
printf("enter the value of radius:");
scanf("%f",&r);
d=r*2;
c=2*3.14*r;
a=3.14*r*r;
printf("Diameter=%f\nCarcamfarancs=%f\nArea=%f",d,c,a);
}