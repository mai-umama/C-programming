#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int j=0;j<t;j++){
        int a;
        scanf("%d", &a);
        int odd =0, even =0;
        for(int i =1;i<=a;i++){
        if(a%i==0){
            if(i%2==0)
                even++;
            else
                odd++;
        }
    }
    printf("%d %d\n", odd, even);
    }
    return 0;
}