#include<stdio.h>
void main()
{
float price,mtp,atp,ptp,ttp,total,mkg,mp,akg,ap,pkg,pp,tkg,tp;
//total amount having Mr.X
total=500;
mkg=1.5;      //mango in kg
mp=35.0;      //mango price
akg=2.0;      //apple in kg
ap=50.0;      //apple price
pkg=2.5;      //potato in kg
pp=10.0;      //potato price
tkg=1.0;      //tomato in kg
tp=15.0;      //tomato price
mtp=mkg*mp;
atp=akg*ap;
ptp=pkg*pp;
ttp=tkg*tp;
price=mtp+atp+ptp+ttp;
printf("\ngccamount shopkeeper will return to X= %f\n",total-price);
}
