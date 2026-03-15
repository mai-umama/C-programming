#include<stdio.h>
#include<string.h>
//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
}st;
int main()
{
    st s1;
    s1.roll= 156;
    strcpy(s1.name , "umama");
    s1.cgpa=5.6;
    printf("student name= %s", s1.name);
    return 0;
}