#include <stdio.h>
   int prime(int num);
    int main(){
    int num1, num2,i,f;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers are ", num1,num2);

    for(i=num1 +1; i<num2;++i)
    {
        f=prime(i);
        if(f==0)
        printf("%d",i);

    }
    return 0;   
}

    int prime(int num)
    {
        int j,f=0;
        for(j=2;j<=num/2;++j){
            if(num%j==0){
                f=1;
                break;
            }
        }
        return f;
    }
