#include<stdio.h>
int main(void){
    int a,b,c;
    printf("Enter the value of a, b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    int max = 0;
    max = (a>b && a>c)?a:(b>c && b>a)?b:c;
    printf("The maximum among these 3 integers is %d\n",max);
    return 0;
}
