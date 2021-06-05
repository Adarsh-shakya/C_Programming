#include<stdio.h>
void main()
{
int r,h,t,f;
float v,w,FH;
r=7;
h=10;
f=15;
v=3.14*r*r*h;
printf("enter the value of t:");
scanf("%d",&t);
w=f*t;
if(w<v)
{
  printf("under flow \n");
  FH=w/(3.14*r*r);
  printf("filled height %f",FH);
  printf("Remaining height %f",h-FH);
}
else if(w>v)
{
  printf("over flow\n");
  printf("volume %f",w-v);
}
else
{
  printf("tank full");
}
}