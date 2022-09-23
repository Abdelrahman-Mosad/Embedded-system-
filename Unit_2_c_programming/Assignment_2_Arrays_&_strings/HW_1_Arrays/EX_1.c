#include <stdio.h>
int main(){

    float a[2][2],b[2][2],c[2][2];
    int i, j;
    
    printf("enter first matrix: \n");

    for(i=0;i<2;++i)
    
        for(j=0;j<0;++j){
            printf("Enter a %d%d ",&i,&j);
            fflush(stdin); fflush(stdout);
            scanf("%f",&a[i][j]);
        }
    
    printf("Enter second matrix: \n");
     for(i=0;i<2;++i)
    
        for(j=0;j<0;++j){
            printf("Enter b %d%d ",&i,&j);
             fflush(stdin); fflush(stdout);
            scanf("%f",&b[i][j]);
        }
    

    for(i=0;i<2;++i)
    
        for(j=0;j<0;++j){
        c[i][j] = a[i][j] + b[i][j];


        }
    
        printf("sum of matrix: ");
        for(i=0;i<2;++i)
    
        for(j=0;j<0;++j){

            printf("%.2f",&c[i][j]);
        }
    
return 0;
}*
