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
    struct student s1;
    s1.roll = 1224;
    s1.cgpa = 3.35;
    //s1.name = "Umama"; it is not correct . by this we just change the value if our char array
    strcpy(s1.name, "umama");
    printf("student name : %s\n", s1.name );
    printf("student roll : %d\n", s1.roll );
    printf("student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 1225;
    s2.cgpa = 3.45;
    strcpy(s2.name, "Aparna");
    printf("student name : %s\n", s2.name );
    printf("student roll : %d\n", s2.roll );
    printf("student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 1226;
    s3.cgpa = 3.85;
    strcpy(s3.name , "Shamim");
    printf("student name : %s\n", s3.name );
    printf("student roll : %d\n", s3.roll );
    printf("student cgpa = %f\n", s3.cgpa);
    
    return 0;
}