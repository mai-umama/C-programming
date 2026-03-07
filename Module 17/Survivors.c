#include<stdio.h>
int main()
{
    int n, T;
    scanf("%d %d", &n, &T);
    int r[n];
    int garden_life= 0;
     for(int i =0; i<n;i++){
        scanf("%d",r[i]);
        if(2*r[i]>=T){
            garden_life++;
        }
     }
    return 0;
}