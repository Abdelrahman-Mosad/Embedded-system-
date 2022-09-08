#include <stdio.h>
int main(){

    char s[100],temp;
    int i,j=0;
    printf("Enter a string: ");
    gets(s);

    i=0;
    j= strlen(s) -1;

    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;

    }

    printf("reverse string is:%s",s);

    return 0;
}
