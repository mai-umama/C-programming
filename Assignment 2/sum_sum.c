#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int V;
    int sum_pos, sum_neg;
    for(int i =0; i<N; i++){ //loop is the shortcut to take multiple inputs
        scanf("%d", &V); //each of i helps to take new value
        if(V>0){
            sum_pos+=V;
        }
        else if(V<0){
            sum_neg+= V;
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    return 0;
}
