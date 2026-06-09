#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i =0;i<t;i++){
        int N;
        scanf("%d", &N);
        for(; ;){
        if(N%2==0){
            N= N/2;}
        else if(N>3){
            N = N - 3;
        }
        else
            {
                break;
            }
        }
         printf("%d\n", N);
    }
    return 0;
}