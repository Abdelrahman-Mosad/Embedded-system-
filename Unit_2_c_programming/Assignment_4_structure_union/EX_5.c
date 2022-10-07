#include <stdio.h>
#define pi 3.142
#define area(r) (pi*(r)*(r))

int main(){
    int r;
    float area;
    printf("Enter a radius:");
    scanf("%d",&r);
    area =area(r);
    printf("Area is=%.2f",area);
    return 0;

}