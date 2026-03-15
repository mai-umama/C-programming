#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
   struct student s1={1225,3.64,"umama"};
   struct student s2={1226,3.84,"Aparna"};
   printf("student name : %s\n", s2.name );
    printf("student roll : %d\n", s1.roll );
    printf("student cgpa = %f\n", s2.cgpa);

    return 0;
}