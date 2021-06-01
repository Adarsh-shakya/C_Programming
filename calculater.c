#include<stdio.h>
int main()
{
float a,b;
int choice;;
printf("enter the frist number:");
scanf("%f",&a);
printf("enter the second number:");
scanf("%f",&b);
printf("choices:\n1>Add\n2>Sub\n3>Mul\n4>Div\n");
printf("enter a choice 1\2\3\4;");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("addtion of two number is: %f",a+b);
break;
case 2:
printf("subraction is :%f",a-b);
break;
case 3:
printf("multiply is :%f",a*b);
break;
case 4:
printf("dived is :%f",a/b);
break;
default:
printf("out of limet");
}
}