
/*task 1
Take two vectors from the user and store it structures compute the dot and cross product and tell whether they are othagonal or not
CODE:*/

#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
    int k;
} vector;
int dotProduct(vector a, vector b)
{
    int ans = 0;
    ans += a.i * b.i;
    ans += a.j * b.j;
    ans += a.k * b.k;
    return ans;
}
vector crossProduct(vector a, vector b)
{
    vector result;
    result.i = (a.j * b.k) - (b.j * a.k);
    result.j = -((a.i * b.k) - (b.i * a.k));
    result.k = (a.i * b.j) - (a.j * b.i);
    return result;
}
int main(void)
{
    vector v1, v2;
    printf("Enter vector 1 in i,j,k form: ");
    scanf("%d,%d,%d", &v1.i, &v1.j, &v1.k);
    printf("Enter vector 2 in i,j,k form: ");
    scanf("%d,%d,%d", &v2.i, &v2.j, &v2.k);
    int dot = dotProduct(v1, v2);
    printf("Dot product of v1 and v2 is: %d\n", dot);
    vector cross = crossProduct(v1, v2);
    printf("Cross product of v1 and v2 are: %di+%dj+%dk\n", cross.i, cross.j, cross.k);
    if (dot == 0)
    {
        printf("As dot product is 0 so vectors are orthogonal\n");
    }
    else
    {
        printf("As dot product is not 0 so vectors are not orthogonal\n");
    }
    return 0;
}

