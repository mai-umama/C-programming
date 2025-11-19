#include<stdio.h>
int main()
{
    int S, A, B, X;
    scanf("%d %d %d %d", &S, &A, &B, &X);
    int time = X- (A+B);
    //int distance = 0;
    int val = X/(A+B);
    int rem = X%(A+B);
    int distance = S*(A*val);

    if(rem<A){
        int new = S*rem;
        distance= distance + new;
    }
    else {
        int new = S*rem-(rem-A);
        distance = distance + new; 
    }
    printf("%d", distance);
    return 0;
}