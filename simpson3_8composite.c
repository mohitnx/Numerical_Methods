#include<stdio.h>
#include<math.h>
#define f(x) 1/x+1
int main()
{
    float a, diff, x0,x1, item, val;
    int i, sem;
     printf("enter lower and upper limit");
    scanf("%f%f", &x0, &x1);
    printf("enter semgents ");
    scanf("%d", &sem);
    diff= (x1-x0)/sem;

    item = f(x0)+f(x1);
    for (i =1; i<=sem-1; i=i+1){
        if (i%3==0)
        {
        a=x0+i*diff;
        item=item+3*f(a);
        }
        else{
             a=x0+i*diff;
             item=item+2*f(a);
        }
    }
val= 3/8.0*diff*item;
printf("value is %f", val);
return 0;
}