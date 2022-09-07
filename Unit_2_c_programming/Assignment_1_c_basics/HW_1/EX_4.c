#include <stdio.h>

int main()
{
	float number1,number2,product;

	printf("Enter two numbers: \n");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&number1, &number2);
	product= number1 * number2;
	printf("product: %f",product);
	fflush(stdout); fflush(stdin);
	return 0;
}
