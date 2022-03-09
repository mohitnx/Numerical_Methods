#include<stdio.h>
#include<math.h>
#define e 0.01

float secfun(float x)
{
    return(2*x*x*x-4*x+3); 
}
int main()
{
    float a,b,c,d;
    int count=0,n;
    printf("Enter the values of a and b:\n"); 
    scanf("%f%f",&a,&b);
    printf("Enter max iterations:\n");
    scanf(" %d",&n);
    do
    {
        if(secfun(a)==secfun(b))
        {
            printf("\nSolution cannot be found \n");
        
        }
        c=(a*secfun(b)-b*secfun(a))/(secfun(b)-secfun(a));
        a=b;
        b=c;
      //running for particular number of iterations
        count++;
        if(count==n)
        break;
    } while(fabs(secfun(c))>e);
    printf("\appriximate root is %f\n",c);
 
}