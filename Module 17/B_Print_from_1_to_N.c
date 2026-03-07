#include<stdio.h>
void num(int n){
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    num(N);
    
    return 0;
}