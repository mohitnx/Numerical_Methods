#include<stdio.h>
#include<math.h>
#define f(x) x*x*x+2*x + 2
int main(){
    float diff,x0,x1,x2,x3,fx0,fx1,fx2,fx3,val;
    int n=3;
    printf("enter lower and upper limit:");
    scanf("%f%f",&x0,&x3);
    diff=(x3-x0)/n;
    x1=x0+diff;
    x2=x0+2*diff;
    fx0=f(x0);
    fx1=f(x1);
    fx2=f(x2);
    fx3=f(x3);
    val=3/8.0*diff*(fx0+3*fx1+3*fx2+fx3);
    printf("Value of integration= %f\n",val);
  
    return 0;
}