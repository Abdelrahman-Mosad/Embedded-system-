#include <stdio.h>
int main(){


    int a[30], element, num, i;

    printf("enter no. of elements: \n");
    scanf("%d", &num);

    printf("enter the values: \n");
    for(i=0; i<num; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the elements ");
    scanf("%d",&element);

    i=0;
    while (i<num && element !=a[i])
    {
        i++;
    }
    
    if (i<num)
    {
       printf("Number is at the location shown: %d", i+1);

    }
    else{
        printf("Number not found");

    }    

    return 0;
}
