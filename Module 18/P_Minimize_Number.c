#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min_count = 100000;
    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
        int count =0;
        int x = a[i];
        while(x%2 == 0){
            count++;
            x/=2;
        }
        if(count<min_count){
            min_count = count ;
        }
    }
    printf("%d",min_count);
    return 0;
}