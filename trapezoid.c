#include<stdio.h>
#include<math.h>
#define f(x) x+5
int main(){
    float diff,x0,x1,fx0,fx1,val;
    printf("enter lower and upper limit:");
    scanf("%f%f",&x0,&x1);
    diff=x1-x0;
    fx0=f(x0);
    fx1=f(x1);
    val=(diff/2)*(fx0+fx1);
    printf(" integration using trapezoid rule is %f\n",val);

    return 0;
}