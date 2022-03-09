#include <stdio.h>
#define max 100
int main()
{
    int n,i,j,k;
    float a[max][max],x[max]= {0},s,m;
    printf("Enter the number of quations :");
    scanf("%d",&n);
    printf("Enter the value of coefficients(in diagonally dominat form) and RHS value :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            scanf("%f",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nAugmented matrix :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }
    // converting the augmented matrix into desired form
    for(k=1; k<=max; k++)
    {
        for(i=1; i<=n; i++)
        {
            s=0;
            for(j=1; j<=n; j++)
            {
                if(i!=j)
                {
                    s=s+a[i][j]*x[j];
                }
            }
            x[i]=(a[i][n+1]-s)/a[i][i];

        }
        
    }
    printf("Resulting Values:\n");
    for(i=1; i<=n; i++)
    {
        printf("a[%d] :%.0f\t",i,x[i]);
        printf("\n");
    }
    return 0;
}