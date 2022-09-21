
#include <stdio.h>

int factorial(int num);
int main(){

    int num;

    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("factorial of %d =%ld",num,factorial(num));

    return 0;

}

    int factorial(int num)
    {
        if(num!=1)
        return num*factorial(num-1);

    }
