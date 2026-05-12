#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i =n;i>=1;i--){
        if(i ==1){
            printf("%d", i);
        }
        else{
        printf("%d ", i);}
    }
    return 0;
}