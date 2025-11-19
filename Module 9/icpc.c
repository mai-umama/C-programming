#include<stdio.h>
int main()
{
   int n, k; 
   scanf("%d %d", &n,&k);
   int a[n];
   for(int i = 0; i<k; i++){
    scanf("%d", &a[i]);
   }
   int min = a[0];
   for(int i = 0; i<n; i++){
    if(a[i]> min){
        printf("%d", a[i]);
    }
    
}
    return 0;
}