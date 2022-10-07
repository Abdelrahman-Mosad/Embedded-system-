#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;

};
int main(){

    struct student s;
    printf("Enter student information: ");
    printf("Enter a name:");
    scanf("%s",s.name);
    printf("Enter a roll number ");
    scanf("%d",&s.roll);
    printf("Enter mark ");
    scanf("%f",&s.marks);
    printf("Display information");
    printf("Name:%s",s.name);
    printf("Roll: %d",s.roll);
    printf("Marks:%.2f",s.marks);
    return 0;
}
