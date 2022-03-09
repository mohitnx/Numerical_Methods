#include <stdio.h>
#define max 100
int main()
{
	int n,i,j;
	float x[max],y[max],F[max][max]={0},h,u,s,p=1,XP;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Enter the value of x :\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%f",&x[i]);
	}
	printf("Enter the value of f(x) :\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%f",&y[i]);
	}
	printf("Enter the value of x for interpolation :");
	scanf("%f",&XP);
	for(i=0;i<n;i++)
	{
		F[0][i]=y[i];
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			F[i][j]=F[i-1][j]-F[i-1][j-1];
		}
	}
	
	h=x[1]-x[0];
	u=(XP-x[n-1])/h;
	s=y[n-1];
	p=1;
	for(i=1;i<n;i++)
	{
		p*=(u-i+1)/i;
		s=s+(p*F[i][n-1]);
	}
	printf("When x= %f , the corresponding Y=%f",XP,s);
	
	
	return 0;
}