#include <stdio.h>
#include <stdlib.h>

/* THis is the example of a comment in the C language,
 Watch the symols in the front and at
 the end of this line. */


//If only one line to be commented, use the symbols as done the beginning of these lines.


int main()
{
        int a, b;
    // Comments can be done inside the function too!

        printf("Hello world! \n");
        printf("My Name is Harsh.\n");
        printf("I have started learning C language!\n");
        printf("%s is awesome person.\n","Harsh");
        printf("This a test numbered %d \n", 5);//%d is used for integers.
        printf("the value of pi is %f \n", 3.1486759);//%f for real values


        printf("the value of pi is %.2f \n", 3.1486759);
        printf("the value of pi is %.5f \n", 3.1486759);

        printf("This is My Addition Code which is running.\n");
        printf("Enter the value of a\n");
        scanf("%d",&a);
        printf("Enter the value of b\n");
        scanf("%d",&b);

        printf("The summation of the values is %d", a+b);


        return 0;   /*whenever you perform a function out,
                    you have to return something to the computer,
                    0 in this case says the function did his job and there's no error.
                    zero means success for the operating system*/


}

/* %s <-- this command will create a storage space to store something which is after the , */
/* This saving can be done multiple times, like do $s twice and give the info to be saved twice as ( "this is $s, and this is $s" , "test1", "test2")*/
/* %d is used to insert a number in a string. */
/* %f is used to input a number with decimal places/a real value in it. f stands for float */

/*                          TYPES OF VARIABLE

    1. Integer Value     :- ----> int a = 3
    2. Real Value        :- ----> float a = 9.7
    3.Character variable :- ----> char a = 'B'

*/


/*                          GETTING INPUT FROM THE UsER

 We use a function called scanf(). scan f takes the data given by the user.
 And in this function we have to specify
 what type of data type is is.

 AND THE MOST IMP THING>
 & ---> address of. this is used to tell where to store the data .

 by & we store that data and we can use it .
 DO NOT FORGET TO GIVE THIS.

*/




















