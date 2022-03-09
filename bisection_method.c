#include <stdio.h>
#include <math.h>
#define e .01

float bisfun(float x)
{
	return(2*x*x*x-4*x+3);
}
int main()
{
	float x0,x1,x;
    int i, count=0, n; //10 iterations
    printf("enter inital values");
    scanf("%f,%f",&x0,&x1);
    printf("Enter max iterations:\n");
    scanf(" %d",&n);
	
	
	do{
		x=(x0+x1)/2;
		if(bisfun(x0)*bisfun(x)<0)
			x1=x;
		else
			x0=x;
		printf("\n%.4f",x);
        count++;
        if(count==n)
        break;
	}while(fabs(bisfun(x))>e);
	
	printf("\nApproximate Root is : %.4f",x);
	return 0;
}