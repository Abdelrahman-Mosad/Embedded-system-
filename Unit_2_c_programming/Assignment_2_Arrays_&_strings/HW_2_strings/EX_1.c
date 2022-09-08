#include <stdio.h>
int main(){

    char c[1000],ch;
    int i,count=0;
    printf("Enter a sting: \0");
    gets(c);

    printf("Enter a character: \0");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';i++)
    {
        if(ch==c[i]){
            ++count;
        }
    }
    printf("frequency of %c= %d",ch,count);

    return 0;
}
