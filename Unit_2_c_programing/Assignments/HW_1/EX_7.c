#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter first number: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&num1);
    printf("Enter second number: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num2 );

   num1 = num1 - num2;
   num2 = num1 + num2;
   num1 = num2 - num1; 

    printf("After swapping, first number= %f\n",num1);
    printf("After swapping, second number= %f",num2);

    return 0;
}
