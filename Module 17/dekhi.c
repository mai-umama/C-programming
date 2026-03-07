#include <stdio.h>

int main()
{
    FILE *in, *out;
    int n;

    // input file open
    in = fopen("input.txt", "r");
    // output file open
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL)
    {
        printf("File open error\n");
        return 1;
    }

    // read input
    fscanf(in, "%d", &n);

    // logic
    if (n >= 80)
        fprintf(out, "Grade: A\n");
    else
        fprintf(out, "Grade: F\n");

    // close files
    fclose(in);
    fclose(out);

    return 0;
}
