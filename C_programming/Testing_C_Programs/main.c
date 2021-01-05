#include <stdio.h>
#include <stdlib.h>



int main()
{
    float tax, income;
    tax = 0;

    printf("Enter Your Income Amount.\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000){
        tax=  tax + 0.05*( income - 250000);
    }
    else if (income>= 500000 && income <= 1000000){
        tax= tax + 0.20*(income- 500000);
    }
    else if (income >=100000){
        tax= tax + 0.30*(income-1000000);
    }

    printf("\nYour total tax to be paid is %f", tax);

    return 0;
}
