
/*3. Write a C program to reverse the contents (character by character) of the file.
CODE :*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *infile = fopen("input1.txt", "r");
    FILE *outfile = fopen("output2.txt", "w");
    if (infile == NULL || outfile == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fseek(infile, 0, SEEK_END);
    int fptr = ftell(infile);
    int i = 0;
    while (i < fptr)
    {
        i++;
        fseek(infile, -i, SEEK_END);
        printf("%c", fgetc(infile));
    }
    fclose(infile);
    fclose(outfile);
    printf("\n");
    return 0;
}
