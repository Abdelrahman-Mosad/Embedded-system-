#include <stdio.h>
int main(){

    char s;
    float  num1,num2;
    printf("choose an operator either * or / or + or -: ");
    scanf("%c",&s);

    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);
    fflush(stdout); fflush(stdin);

    switch(s){
        case '*':
        printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
        break;
        case '/':
        printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
        break;
        case '+':
        printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
        break;
        case '-':
        printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
        break;
    default:
        printf("Error! operator is not correct");
        break;    
    }

    return 0;

}
