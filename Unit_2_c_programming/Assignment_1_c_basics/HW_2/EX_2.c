#include <stdio.h>
int main()
{
    char c;
    printf("enter an alphapet",&c);
    scanf("%c, &c");
    if(c=='a'|| c=='A'|| c=='E'|| c=='e'|| c=='o'|| c=='O'|| c=='i'|| c=='I'|| c=='U'|| c=='u'){
    printf("%c is a vowel, c");
    else
    printf("%c is a consonant, c");
    }
    return 0;
}
