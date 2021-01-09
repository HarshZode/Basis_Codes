#include <stdio.h>
#include <stdlib.h>



int main()
{
    // PRIME NUMBER TEST


    int n;
    int prime = 1;

    printf("Enter a number to find whether it is a prime number or not.\n");
    scanf("%d", &n);

    for (int i=2; i<n; i++){
        if (n%i==0){
            prime =0;
            break;
        }

    }
    if(prime ==0 && n!=2){
    printf("This is not prime number.\n");
    }
    else{
        printf("This is a prime number.\n");
    }
    return 0;
}
