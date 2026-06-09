#include<stdio.h>
int main()
{
    int P1,P2,P3,P4;
    scanf("%d %d %d %d", &P1,&P2,&P3,&P4);
    int week=0;
    if(P1>=10)
        week++;
    if (P2>=10)
    {
        week++;
    }
    if(P3>=10)
        week++;
    if(P4>=10)
        week++;
    
    printf("%d\n", week);
    return 0;
}