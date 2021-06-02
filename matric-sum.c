#include<stdio.h>
void main()
{
int arr[100][100],arr1[100][100],arr2[100][100];
int i,j,r1,c1,r2,c2;
printf("Enter the row and colamm  frist matrix :");
scanf("%d %d",r1,c1);
for(i=0;i<=r1;i++)
    {
       for(j=0;j<=c1;j++)
       {
         printf("Enter the value of frist matrix at address %d%d",i,j);
         scanf("%d",arr1[i][j]);
        }
     }
printf("enter the row and colamm of secand matrix: ");
scanf("%d %d",r2,c2);
for(i=0;i<=r2;i++)
     {
       for(j=0;j<=c2;j++)
          {
         printf("Enter the value of secand matrix at address %d%d",i,j);
         scanf("%d",arr2[i][j]);   
          }
      }
if(r1==r2||c1==c2)
{
for(i=0;i<=r1;i++)
      {
         for(j=0;j<=c2;j++)
        {
         arr[i][j]=arr1[i][j]+arr2[i][j];
        }
       }
}
for(i=0;i<=r1;i++)
      {
         for(j=0;j<=c2;j++)
        {
         printf("%d ",arr[i][j]);
        }
 printf("\n");
       }
}       