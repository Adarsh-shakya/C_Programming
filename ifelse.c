#include<stdio.h>
void main()
{
int n,m,s;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of m:");
scanf("%d",&m);
s=n+m;
printf("%d",s);
if(s>=3&&s<=30)
{
   printf("Adarsh");
}
else if(s>=31&&s<=40)
{
   printf("Shakya");
}
else
{
   printf("s is not 3 & 40");
}
}  