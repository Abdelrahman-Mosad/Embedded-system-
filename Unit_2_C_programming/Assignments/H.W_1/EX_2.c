#include <stdio.h>

int main()
{
	int integer;
	printf("Enter an integer: \n");
	fflush(stdout);
	scanf("%d",&integer);
	printf("you entered: %d", integer);
	return 0;
}
