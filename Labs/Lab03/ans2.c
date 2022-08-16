
#include<stdio.h>
int main(void){
    float l,b;
    printf("Enter the length of rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&b);
    float peri = 0;
    peri = (l-(-b)) - (-(l-(-b)));
    printf("perimeter of rectangle is: %0.2f\n",peri);
    return 0;
}
