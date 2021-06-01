//Numbber in asending order
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter number a:");
scanf("%d",&a);
printf("enter number b:");
scanf("%d",&b);
printf("enter number c:");
scanf("%d",&c);
if((a>b)&&(a>c))
{
  if(b>c)
    printf("%d>%d>%d",a,b,c);
  else
    printf("%d>%d>%d",a,b,c);
}
else if((b>c)&&(b>a))
{
   if(c>a)
     printf("%d>%d>%d",b,c,a);
   else
    printf("%d>%d>%d",b,a,c);
}
else
{
   if(a>b)
     printf("%d>%d>%d",c,a,b);
   else
     printf("%d>%d>%d",c,b,a);
}
}
