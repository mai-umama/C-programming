#include<stdio.h>
#include<string.h>
//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1={234,8.9,"maisha"};
    struct student *p;
    p= &s1;
    printf("stdent info = %d\n",p->roll);
    printf("stdent info = %s\n",(*p).name);
    return 0;
}