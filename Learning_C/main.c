#include <stdio.h>
#include <stdlib.h>

/* THis is the example of a comment in the C language,
 Watch the symols in the front and at
 the end of this line. */


//If only one line to be commented, use the symbols as done the beginning of these lines.


int main()
{

    // Comments can be done inside the function too!

        printf("Hello world! \n");
        printf("My Name is Harsh.\n");
        printf("I have started learning C language!\n");
        printf("%s is awesome person.\n","Harsh");
        printf("This a test numbered %d \n", 5);
        printf("the value of pi is %f \n", 3.1486759);
        printf("the value of pi is %.2f \n", 3.1486759);
        printf("the value of pi is %.5f \n", 3.1486759);



        return 0;   /*whenever you perform a function out,
                    you have to return something to the computer,
                    0 in this case says the function did his job and there's no error.*/


}

/* %s <-- this command will create a storage space to store something which is after the , */
/* This saving can be done multiple times, like do $s twice and give the info to be saved twice as ( "this is $s, and this is $s" , "test1", "test2")*/
/* %d is used to insert a number in a string. */
/* %f is used to input a number with decimal places in it. f stands for float */



























