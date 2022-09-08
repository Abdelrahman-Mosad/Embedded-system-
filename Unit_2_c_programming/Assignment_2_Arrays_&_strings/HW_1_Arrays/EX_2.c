#include <stdio.h>
int main(){

    int n,i;
    float num[100],sum=0.0,average;
    printf("Enter numbers needed: ");
    scanf("%d",&n);
    while (n>100 || n<=0)
    {
        printf("Error\n");
        printf("Enter number again:\n");
        scanf("%d",&n);
    }
    for (i=0;i<n;++i)
    {
        printf("%d Enter a number:", i+1);
        scanf("%f",&num[i]);
        sum += num[i];

    }
    average = sum / n;
    printf("average value is = %.2f", average);



    return 0;
}
