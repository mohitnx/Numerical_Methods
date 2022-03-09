#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.01
float newf(float x)
{
	return(2*x*x*x-4*x+3);
}
float df(float x)
{
	return((6*x*x)-4);
}
int main()
{
	float xn,x;
	int i;
	for(i=0;i<=100;i++)
	{
		if(newf(i)*newf(i+1)<0)
		{
			break;
		}
	}
	xn=i+1;
	
	do{
		x=xn-(newf(xn)/df(xn));
			xn=x;
		printf("\n%.4f",x);
			
	}while(fabs(newf(x))>e);
	printf("\nApprox root : %.4f",x);
	return 0;
}