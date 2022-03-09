#include<stdio.h>
#include<math.h>
#define f(x) 6*x*x+4*x-1
int main(){
    float diff,x0,x1,x2,fx0,fx1,fx2,val;
    int n=2;
    printf("enter lower and upper limit:");
    scanf("%f%f",&x0,&x2);
    diff=(x2-x0)/n;
    x1=x0+diff;
    fx0=f(x0);
    fx1=f(x1);
    fx2=f(x2);
    val=(diff/3)*(fx0+4*fx1+fx2);
    printf("Value of integration is= %f\n",val);
   
    return 0;
}