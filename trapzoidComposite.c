#include<stdio.h>
#include<math.h>
#define f(x) 6*x*x+2*x-1
int main()
{
    float a, dif, x0, x1, item, val;
    int i, sem;
    printf("enter lower and upper limit");
    scanf("%f%f", &x0, &x1);
    printf("enter semgents ");
    scanf("%d", &sem);
    dif = (x1-x0)/sem;
    item= f(x0)+f(x1);
    for (i = 1; i<=sem; i++)
    {
        a=x0+i*dif;
        item=item+2*f(a);
    }
    val= dif/2*item;
    printf("the requeird value is %f",val);
    return 0;

}