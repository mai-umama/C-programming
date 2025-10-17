#include<stdio.h>
int main()
{
    int A;
    long long int B;
    float C;
    char D;

    scanf("%d",&A);
    scanf("%lld",&B);
    scanf("%f",&C);
    scanf(" %c",&D);  // space important

    printf("%d\n",A);
    printf("%lld\n",B);
    printf("%f\n",C);
    printf("%c\n",D);

    return 0;
}
