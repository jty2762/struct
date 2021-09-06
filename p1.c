#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int number; 
    char name[10];
    double grade;
};

int main(){
    struct student s;
    s.number = 20150001;
    strcpy(s.name, "JTY");
    s.grade = 4.5;
    printf("numder = %d\n", s.number);
    printf("name = %s\n", s.name);
    printf("grade = %0.1lf\n", s.grade);

    return 0;
}