#include <stdio.h>
union size{
    char name[32];
    float amount;
    int no;

    
}t;
struct size2{
    char name[32];
    float amount;
    int no;

}r;
int main(){
    printf("size of the union:%d\n",sizeof(t));
    printf("size of structure:%d",sizeof(r));
    return 0;
}