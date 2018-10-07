#include<stdio.h>
int main()
{
 int a[4][3],b[4][3],c[4][3],i,j;
 printf("enter the values of 2 matrixes");
 for(i=0;i<4;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d  ",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d  ",b[i][j]);
  }
  printf("\n");
 }
 c[4][3]=a[4][3]+b[4][3];             //matrix addition//
 printf("the sum of the matrices are :-\n");
 for(i=0;i<4;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d    ",a[i][j]+b[i][j]);
  }
  printf("\n");
 }
 return 0;
}
