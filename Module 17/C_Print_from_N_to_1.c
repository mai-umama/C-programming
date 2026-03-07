#include<stdio.h>
void count(int N){
    int i =N;
    while(i>=1){
        if(i == 1){
            printf("%d",i);
        }
        else{
            printf("%d ",i);
        }
        i--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    count(n);
    return 0;
}