#include<stdio.h>
#include<math.h>
#define f(x) 3*x*x+5
int main()
{
    float inc,x,ans;
    printf("enter teh value to calcluate derivative");
    scanf("%f",&x);
    printf("enter the increment value");
    scanf("%f", &inc);
    ans= f(x)-(f(x-inc))/(inc);
    printf("teh derivative is %f", ans);

}