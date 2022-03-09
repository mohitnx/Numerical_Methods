#include<stdio.h>
#include<math.h>
#define e 0.01



float fix(float x)
{
	return ((5/x)+x)/3;
}

int main()
{
	float a,b, error;
	printf("Enter initial guess:");
	scanf("%f",&a);
	
	while (1)
    { 
        b=fix(a);
        error = (b-a)/b;
       	if(fabs(error<e))
		{
			printf("approximate root is =%f",b);
			break;
		}
		
			a=b;
			
    }
    
	return 0;
}