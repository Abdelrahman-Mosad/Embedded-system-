#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;

};
int main(){
    struct student s[10];
    int i;
    printf("Enter the students informations:\n");
    for(i=0;i<10;++i){
        s[i].roll=i+1;
        printf("roll number %d",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");

    }

    printf("Dsiplaying the student infomation as follow:\n");
    for(i=0;i<10;++i)
    {
        printf("Information roll number%d:",i+1);
        printf("Name:");
        puts(s[i].name);
        printf("marks:%.1f",s[i].marks);
    }
    return 0;
}