#include<stdio.h>
int main(void){
    int i = 100;
    for(int i=0;i<=10;i++){
        i++;
        printf("%d\n",i);
    }
    printf("%d\n",i);
    return 0;
}

/* the last statement will take value of i from gloabl scope as i inside for loop has local scope and can't be used outside the for loop */
