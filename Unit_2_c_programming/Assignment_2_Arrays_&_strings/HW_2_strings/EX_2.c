#include <stdio.h>
int main(){

    char s[1000],i;
    printf("Enter a string: \n");
    scanf("%s",&s);

    for(i=0; s[i] !='\0';++i);
    printf("Length of a string is:%d",i );

    return 0;
}
