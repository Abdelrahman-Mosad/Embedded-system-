#include <stdio.h>
int main()
{
    float num;

    printf("Enter the number you want to check: ");
    scanf("%f, &num");

    if(num<=0){

        if(num==0){
            printf("The number is zero");
        }
            else {
                printf("%.2f is negative",num);
            }


    else
        printf("%.2f is postive",num);
    
    }

  return 0;
}
