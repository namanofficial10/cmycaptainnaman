#include <stdio.h>

int main(){

    int num,factorial,i;

    printf("------------------------------Factorial Calculator------------------------------");

    printf("\n\nEnter Number:");
    scanf("%d",&num);

    factorial=1;

    for(i=1;i<=num;i++){

        factorial=factorial*i;
    }

    printf("\nFactorial = %d",factorial);


    return 0;
}
