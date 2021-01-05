#include <stdio.h>
#include <stdlib.h>



int main()
{
    int physics, chemistry, math ;
    float total;
    printf("Enter marks of Physics\n");
    scanf("%d",&physics);
    printf("Enter marks of chemistry\n");
    scanf("%d", &chemistry);
    printf("Enter marks of maths\n");
    scanf("%d", &math);

    total = (physics + chemistry+ math)/3;

   if (total <40 || physics <33 || chemistry <33 || math<33){
    printf("\nYour Total is %f You failed.\n",total);
   }
   else {printf("\nYour Total is %f  You passed\n",total);}

    return 0;
}
