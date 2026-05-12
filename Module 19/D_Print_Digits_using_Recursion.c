//If print is AFTER recursive call:
// Output becomes reverse order
#include<stdio.h>
void recursion(int n){
    if(n==0){
        return;
    }
    int last = n%10;
    //printf("%d ",last);
    recursion(n/10);
    printf("%d ",last);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n == 0){
            printf("0");
        }
        else{
        recursion(n);}
        printf("\n");
}
    return 0;
}
    