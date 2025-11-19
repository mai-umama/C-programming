#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int treeLines = N + 5; 
    int maxStars = 2 * (treeLines - 1) + 1;  

    
    for (int i = 0; i < treeLines; i++) {
        int stars = 2 * i + 1;
        int spaces = (maxStars - stars) / 2;

        for (int s = 0; s < spaces; s++) printf(" ");
        for (int s = 0; s < stars; s++) printf("*");
        printf("\n");
    }

    int stemStars = 2 * N - 1;
    int stemSpaces = (maxStars - stemStars) / 2;

    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < stemSpaces; s++) printf(" ");
        for (int s = 0; s < stemStars; s++) printf("*");
        printf("\n");
    }

    return 0;
}
