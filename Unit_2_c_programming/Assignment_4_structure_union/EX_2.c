#include <stdio.h>
struct distance{
    int feet;
    float inch;

}d1,d2,sum;
int main(){

    printf("Enter information for the first distance:\n ");
    printf("Enter in feet:");
    scanf("%d",&d1.feet);
    printf("Enter in inch");
    scanf("%f",&d1.inch);
     printf("Enter information for the second distance: \n");
    printf("Enter in feet:");
    scanf("%d",&d2.feet);
    printf("Enter in inch");
    scanf("%f",&d2.inch);  

    sum.feet= d1.feet + d2.feet;
    sum.inch= d2.inch + d2.inch;  

    if (sum.inch>12.0){
        sum.inch=sum.inch-12;
        ++sum.feet;

    }

    printf("Sum of distance =%d\'-%.1f\"",sum.feet,sum.inch);
    return 0;
}
