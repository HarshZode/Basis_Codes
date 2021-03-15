#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,a,b,c,d,e,f,sum;
   printf("Enter A Five Digit Number\n");
   scanf("%d", &n);

   a= n/10000;
   b= n/1000 - a*10;
   c= n/100  - b*10 - a*100;
   d =n/10   - c*10 - b*100 - a*1000;
   e =n/1    - d*10 - c*100 - b*1000 - a*10000;


   sum = a+b+c+d+e;
   printf("The Sum Of Digits Of Given Number Is:-\n");
   printf("%d\n",sum);
   return 0;
}
