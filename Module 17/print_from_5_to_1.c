#include<stdio.h>

void hello(int i)
{
    if(i == 0){   //end condition
        return;
    }
    printf("%d\n", i);
    hello(i-1);    // increment or decrement
}

int main()
{
    int i = 5;
    hello(i);   //initialization/ starting
    return 0;
}
//if we compare with loop 