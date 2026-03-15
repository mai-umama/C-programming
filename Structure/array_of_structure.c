#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[50];
};

int main()
{
    struct student ECE[100];
    //struct student COE[100];
    //struct student IT[100];
    ECE[0].roll=1664;
    ECE[0].cgpa= 9.4;
    strcpy(ECE[0].name, "Umama");
    printf("name= %s\n", ECE[0].name);
    printf("roll= %d\n", ECE[0].roll);
    printf("cgpa= %f\n", ECE[0].cgpa);

    return 0;
}