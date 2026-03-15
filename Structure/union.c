#include<stdio.h>
union student{
    long roll;
    float gpa;
};
int main()
{
    union student d;
    d.gpa =7.89;
    d.roll= 8906567;
    printf("Roll = %ld\n", d.roll);
    printf("Gpa = %f\n", d.gpa);
    return 0;
}