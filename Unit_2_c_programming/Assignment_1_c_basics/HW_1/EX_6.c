#include <stdio.h>
int main()
{
    float num1, num2, temp;
    printf("Enter first number: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&num1);
    printf("Enter second number: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num2 );

    temp= num1;
    num1= num2;
    num2= temp;

    printf("After swapping, first number= %f\n",num1);
    printf("After swapping, second number= %f",num2);

    return 0;
}
