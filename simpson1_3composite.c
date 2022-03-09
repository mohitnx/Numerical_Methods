#include<stdio.h>
#include<math.h>
#define f(x) 1/x
int main()
{
    float a, diff=0, x0,x1, item=0, val=0;
    int i, sem;
     printf("enter lower and upper limit");
    scanf("%f%f", &x0, &x1);
    printf("enter semgents ");
    scanf("%d", &sem);
    diff= (x1-x0)/sem;

    item = f(x0)+f(x1);
    for (i =1; i<=sem-1; i=i+1){
        a=x0+i*diff;
        item=item+4*f(a);
    }
    for (i=2; i<=sem-2;i=i+2)
    {
    a=x0+i*diff;
    item=item+2*f(a);
    }
val= diff/3*item;
printf("value is %0.4f", val);
return 0;
}