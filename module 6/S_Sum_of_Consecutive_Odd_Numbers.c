#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i =1; i<= T; i++){
        int X,Y;
        scanf("%d %d", &X, &Y);
        if(X>Y){
            int tem = X;
            X =Y;
            Y= tem;
        }
        int sum = 0;
        for(int j = X+1; j< Y; j++){
            if(j % 2 != 0){
                sum +=j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}