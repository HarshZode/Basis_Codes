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

/*                          ARATHEMATIC OPERATORS


   + --> ADDS
   - --> SUBTRACTS
   * --> MULTIPLIES (Note :- While multiplying we not assume that the multiplying operators is already present in the equation. like for ab or a.b for a*b. THIS IS WRONG. THis will throw error.)
   / --> DIVIDES
   % --> GIVES REMINDER (EG :- 5%2 gives 1 As Reminder)

   There is no exponential operator (power operators) is C programming language.
   Like For example 5^4 gives us error.
   However we can use an in-built function named pow('number','raised to the power').
   But to use that function we need to include the library called <math.h>
   ALSO, WE USE %f TO GET THE OUTPUT because at %d it prints 0.


                            TYPE CONVERSION

             Arithmetic operations between Different data type


                    int and int     --> int
                    int and float   --> float
                    float and float --> float



*/

/*                           Conditional Instrutors


            These are some functions which can decide which part of code is to be exicuted.

            Code Example :-
                            int a = 23;
                            if (a<18){
                                printf("You can drive.\n);
                            }
                            else{
                                printf("You cannot drive");
                            }




                            LOGICAL OPERATORS


            &&, ||, ! are three logic operators which are And, Or, Not respectively.

            && -> And operator is true when both the conditions are true.
            || -> Or operator is true when one of the conditions are true.
            ! -> Not returns true if given false and false when given true.
                    !(3==3) -> evaluated to be false.
                    !(3== 21) -> evaluated as true.




                            ELSE IF CLAUSE


            Instead  of using multiole if statement, we can also use else if along with if
            thus forming an if-else if-- else ladder.

                    if {
                        // Statement
                    }
                    else if {
                        // Statement
                    }
                    else if {
                        // Statement
                    }
                    else {
                        // Statement
                    }


                            Switch Case Control Instruction


                Switch case is used when we have to make a choice between number of
                alternatives for a given variable.


                    Swith(integre-expression)
                    {
                    Case C1:
                            code;
                    case c2 :
                            code;  // C!, C2, C3 -> are constants
                                   // code -> Any vaild C code.
                    case c3 :
                            code;
                    default:
                            code;
                    }

 The value of integer - Expression is matched against C1, C2, C3,....
 If it matches any of these cases along with all subsequent "case" and
 "default" statements are executed.

 Important notes:
                 1) We can use switch- case statements even by
                   writing cases in any order of our choice (not necessarily ascending)
                 2) Char values are allowed as they can be easily evaluated to an integer
                 3) A switch can occur within another but in practice this is rarely used.


*/

/*                  Loops

There is three types of loops;

1) while loop :-

    its syntex is

    while('condition'){
        function to be exicuted;
        }

2) do-while loop :-
                    This is a special type of loop which
                     first exicutes the thing inside and then
                      checks the condition to repeat the loop again.

    It's syntex is :-

    do{
    //Code//;
    }while(condition)


3) for loop :-
                for (initialize ; condition; increment or decrement){
                    //code;
                    //code;
                    //code;
                }

                initilize --> Setting a loop counter to an initial value
                increment --> updating the loop counter

        Eg:- for (i =0; i<3 ; i++){
        printf("%d",i);
        printf("\n");
        }

        The output will be:
                            0
                            1
                            2

 ++ --> increases the value by 1
 -- --> Decreases the value by 1
 *= --> multiplies the value by given number
        for example :- a *= 2
            this will multiply the initial value of a by 2.
 /= --> This will divide the initial value by the value entered after equals sign (=).
 */


















