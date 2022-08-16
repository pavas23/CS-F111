/*1. Write a C program to merge the contents of two files into a third file.
CODE:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr1 = fopen("input1.txt", "r");
    FILE *fptr2 = fopen("input2.txt", "r");
    FILE *fptr3 = fopen("output.txt", "w");
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
    {
        printf("Error!");
        exit(1);
    }
    char c;
    while ((c = fgetc(fptr1)) != EOF)
    {
        fwrite(&c, 1, 1, fptr3);
    }
    while ((c = fgetc(fptr2)) != EOF)
    {
        fwrite(&c, 1, 1, fptr3);
    }
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}

