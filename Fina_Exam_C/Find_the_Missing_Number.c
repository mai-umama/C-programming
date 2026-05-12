#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i =1;i<=T;i++){
        long long int mul, A,B,C;
        scanf("%lld %lld %lld %lld", &mul, &A, &B, &C);
        long long int mul_of_three= A*B*C;
        if(mul_of_three == 0){
            printf("-1\n");
        }
        else if (mul % mul_of_three==0){
        long long int D = (mul / mul_of_three);
        printf("%lld\n", D);}
        else{
            printf("-1\n");
        }
    }
    return 0;
}