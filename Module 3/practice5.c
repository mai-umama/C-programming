#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%5==0)
        {
            printf("%d Yes\n",i);
        }
        if(i%5!=0)
        {printf("%d No\n", i);}
    }
    return 0;
}