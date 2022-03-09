#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int x[100], y[100], r, con;
    int l,a, deg;
    printf("enter degree of equation");
    scanf("%d", &deg);
    printf("enter coefficients");
    for (int i=deg; i>=0; i--)
    {
        scanf("%d", &x[i]);
    }
    printf("enter constant in x-a");
    scanf("%d", &con);
    y[deg]=0;
    a=deg;
    while(a>0){
        y[a-1]=x[a]+y[a]*con;
        a--;
    }
    printf("quotient:");
    a=deg-1;
    while(a>=0)
    {
        if (y[a]!=0)
        printf("%dx^%d+", y[a],a);
        a--;
    }
    return 0;
}

