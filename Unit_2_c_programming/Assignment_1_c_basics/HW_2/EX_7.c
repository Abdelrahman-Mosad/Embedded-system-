#include <stdio.h>
int main(){

    int n, count;
    unsigned long long int factorial=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n<0)
    printf("Error!!! Fcatorial of negative number does not exist ");
    else
    {
        for(count=1;count<=n;++count)
    {
        factorial*=count;

    }
    printf("factorial= %lu", factorial);

    }


    return 0;

}
