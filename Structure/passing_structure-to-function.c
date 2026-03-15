#include<stdio.h>
#include<string.h>
//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1); //ai line age likhe fello compiler bujhbei nah struct student abar ki
int main()
{
    struct student s1={234,8.9,"maisha"};
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1){
    printf("stdent info \n");
    printf("stdent.roll = %d\n",s1.roll);
    printf("student.name= %s\n", s1.name);
    printf("student.cgpa = %f\n", s1.cgpa);
}