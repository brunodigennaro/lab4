/* Bruno DiGennaro
   CPSC 1111
   September 19, 2022
   This program prints the values of declared variables and expression values

   fprintf() printed the expected values for intVar 3 and 4 and acts like printf()
*/
#include <stdio.h>

int main (void) {

    // Declares and assigns values to all variables
    int intVar1 = 4, intVar2 = 5, intVar3 = 5, intVar4 = 9;

    int exp1 = intVar1 + ( (5 * intVar2) / (3 * intVar1) );
    int exp2 = intVar1 + (5 * (intVar2 / 3)) * intVar1;
    int exp3 = (intVar4 % 2) / (intVar4 / intVar3);
    int exp4 = 2 + intVar3 * intVar4;

    // Declares variable charVar as H
    int charVar = 'H';

    // Increases the value of charVar by 32
    charVar += 32;

    
    // Prints statement declaring first two 'intVar' variables
    printf("\n intVar1 = %i and intVar2 = %i \n", intVar1, intVar2);

    // Prints statement stating the results of the math done in the 'exp' variables
    printf("\n Expression values are:\n exp1 = %i \n exp2 = %i \n", exp1, exp2);

    // Prints to standard output the values of the last two 'intVar' values
    printf("\n intVar3 = %i and intVar4 = %i \n", intVar3, intVar4);

    // Prints the values for exp3 and exp4
    printf("\n Expression values are:\n exp3 = %i \n exp4 = %i \n", exp3, exp4);

    // Prints to standard output the variable 'charVar' as 'H' in character and ASCII value form
    printf("\n charVar = %c ASCII value: %d \n", 'H', 'H');

    // Prints to standard output the variable 'charVar' as 'h' in character and ASCII value form
    printf("\n charVar = %c ASCII value: %d \n \n", charVar, charVar);

    return 0;
}