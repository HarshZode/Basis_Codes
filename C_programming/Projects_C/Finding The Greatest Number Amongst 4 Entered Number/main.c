#include <stdio.h>
#include <stdlib.h>



int main()
{
    // FIND THE GREATEST NUMBER
    int a,b,c,d;
    printf("Enter First Number\n");
    scanf("%d", &a);

    printf("Enter Second Number\n");
    scanf("%d", &b);

    printf("Enter Third Number\n");
    scanf("%d", &c);

    printf("Enter Fourth Number\n");
    scanf("%d", &d);

    if (a>b && a>c && a>d){
        printf("The Number %d is the greatest amongst other numbers.\n", a);
    }
    else if (b>a && b>c && b>d){
        printf("The Number %d is the greatest amongst other numbers.\n", b);
    }
    else if (c>d &&c>b && c>a)
    {
        printf("The Number %d is the greatest amongst other numbers.\n", c);
    }
    else if (d>c && d>b &&d >a){
        printf("The Number %d is the greatest amongst other numbers.\n", d);
    }

    return 0;
}
