#include <stdio.h>
int main()
{   
    float a,b,c;
    printf("Enter three numbers: ",&a,&b,&c);
    scanf("%f, &a");
    scanf("%f, &b");
    scanf("%f, &c");

    if(a>=b && a>=c){
    printf("largest number is:%.2f",a);
    }
    else if(b>=a && b>=c){
    printf("largest number is:%.2f",b);
    }
    else if(c>=a && c>=b){
    printf("largest number is:%.2f",c);
}

    return 0;
}
