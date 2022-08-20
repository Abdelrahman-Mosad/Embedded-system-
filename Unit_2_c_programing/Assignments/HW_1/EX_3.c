#include <stdio.h>

int main()
{
	int integer1;
	int integer2;
	int sum;
	printf("Enter two integers: \n");
	fflush(stdout);
	scanf("%d &d", &integer1 , &integer2);
	sum= integer1 + integer2;
	printf("sum: %d", sum);
	return 0;
}
