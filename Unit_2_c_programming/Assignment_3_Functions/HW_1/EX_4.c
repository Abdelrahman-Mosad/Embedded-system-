
#include <stdio.h>
int power (int num1,int num2);
int main(){
    int base, exp;
    printf("Enter base number:");
    scanf("%d",&base);
    printf("Enter a number: ");

    scanf("%d",&exp);
    printf("%d^%d =%d", base,exp,power(base,exp));
    return 0;

}

    int power(int base, int exp)

        {
            if (exp!=0)
            return( base*power(base,exp-1));

        }
     
