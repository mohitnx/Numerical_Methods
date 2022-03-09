#include<stdio.h>
#include<math.h>
sElimination(int m, int n, double a[m][n]){
    int i,j,k;
    for(i=0;i<m-1;i++){
        //Partial Pivoting
        for(k=i+1;k<m;k++){
           
            if(fabs(a[i][i])<fabs(a[k][i])){
             
                for(j=0;j<n;j++){                
                    double temp;
                    temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
            }
        }
        
        for(k=i+1;k<m;k++){
            double  term=a[k][i]/ a[i][i];
            for(j=0;j<n;j++){
                a[k][j]=a[k][j]-term*a[i][j];
            }
        }
    }
             
}

void readMatrix(int m, int n, double matrix[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%lf",&matrix[i][j]);
        }
    } 
}

void printMatrix(int m, int n, double matrix[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%lf\t",matrix[i][j]);
        }
        printf("\n");
    } 
}

void copyMatrix(int m, int n, double matrix1[m][n], double matrix2[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matrix2[i][j]=matrix1[i][j];
        }
    } 
}
 
int main(){
    int m,n,i,j;
    printf("Enter the size of the matrix:\nNo. of rows (m)\n");
    scanf("%d",&m);
    printf("No.of columns (n)\n");
    scanf("%d",&n);
  
    double a[m][n];
    
    double U[m][n];
    printf("\nEnter the elements of matrix:\n");
    readMatrix(m,n,a);
    copyMatrix(m,n,a,U);
 
    gaussElimination(m,n,U);
    printf("\nThe Upper Triangular matrix after Gauss Eliminiation is:\n\n");
    printMatrix(m,n,U);
     
}