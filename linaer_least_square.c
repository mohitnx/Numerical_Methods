#include<stdio.h>

#define S 100

int main()
{
 int n, i;
 float x[S], y[S], sumofX=0, sumofX2=0, sumofY=0, sumofXY=0, x0, y0;
 
 printf("How many data points?\n");
 scanf("%d", &n);
 printf("Enter data:\n");
 for(i=1;i<=n;i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &y[i]);
 }

 for(i=1;i<=n;i++)
 {
  sumofX = sumofX + x[i];
  sumofX2 = sumofX2 + x[i]*x[i];
  sumofY = sumofY + y[i];
  sumofXY = sumofXY + x[i]*y[i];
 }

 y0 = (n*sumofXY-sumofX*sumofY)/(n*sumofX2-sumofX*sumofX);
 x0 = (sumofY - y0*sumofX)/n;


 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",x0,y0);

 return 0;
}