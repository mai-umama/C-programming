#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,num;
    int Even = 0, Odd=0, Positive = 0, Negative = 0;
    for (i=1; i<N+1; i++ ) {
        scanf("%d",&num);
        if(num%2 == 0){
            Even++;
        }
        else if(num%2!= 0){
            Odd++;
        }
        if(num>0){
            Positive++;
        }
        else if(num<0){
            Negative++;
        }

    }
    printf("Even: %d\n", Even);
    printf("Odd: %d\n", Odd);
    printf("Positive: %d\n", Positive);
    printf("Negative: %d\n", Negative);
    return 0;
}