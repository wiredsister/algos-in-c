#include <stdio.h> 

/* print Fahrenheit-Celsius table 
   for fahr = 0, 20, ..., 300 */

main()
{
    /* in C all variables must be declared before they are used */ 
    int fahr, celsius; 
    int lower, upper, step;

    /* type int means that the variables listed are integers...
       as opposed to type float (floating point). The range of 
       both int and float depends on the machine you are using;
       16-bit ints, which lie between -32768 and + 32767, are 
       common, as are 32-bit ints. */ 

    /* other types are: 
       char ..... character, a single byte
       short ..... short integer 
       long ..... long integer 
       double ..... double-precision floating point */

    /* Computation begins with assignment statements */ 
    /* note: individual statements are terminated with a semi-colon */

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */ 

    /* Nobody likes magic numbers, instead use:
       #define name replacement text
       for example: 
       #define LOWER 0 
       #define UPPER 300
       #define STEP 20

       * symbolic constant names are conventionally written
       uppercase so they can be readily distinguished from
       lower case variable names. There is no semicolon at 
       the end of the #define line. This goes right under
       your library imports. 
    */ 

    fahr = lower;
    while (fahr <= upper) /* while loops end when test condition is false */
	{
	    celsius = 5 * (fahr - 32) / 9;
	    /* "The reason for multiplying by 5 and then dividing by 9
	       instead of just multiplying by 5/9 is that in C,
	       as in many other languages, integer division truncates:
	       any fractional part is discarded. Since 5 and 9 are ints, 
	       5/9 would be truncated to zero and so all the Celsius 
	       temperatures would be reported as zero." (K&R, 10) */

	    /* printf takes a first argument of a string of characters 
	       to be printed, with each % indicating where one of the 
	       other (second, third, ...) arguments is to be substituted,
	       and in what form it is to be printed.*/

	    printf(" %d \t %d \n", fahr, celsius);
	    /* %d specifies an integer arg */ 

	    /* to make this printed version prettier, we could make it 
	       right justified in their fields, for example:

	           printf("%3d %6d\n", fahr, celcius); 

	       would print the first number of each line in a field 
	       three digits wide, and the second in a field six digits
	       wide. 
	       
	       note: 
	       %d => print as a decimal int
	       %6d => print as a decimal int, 6 characters wide
	       %f => print as a floating point
	       %6f => print as a floating point, at least 6 characters wide
	       %.2f => print as a floating point, 2 characters after decimal
	       point
	       %6.2f => print as a floating point, at least 6 wide and 
	       2 after decimal point

	       %o => octal 
	       %x => hexadecimal
	       %c => character
	       %s => character string
	       %% => % itself
	    */

	    /* we also won't get very accurate answers because we're 
	       doing int arithmetic... we should use floating-point 
	       arithmetic instead
	       i.e. celcius = (5.0/9.0) * (fahr - 32.0);
	    */ 

	    /* note: if an arithmetic operator has one floating-point 
	       operand and one integer operand, the integer will be
	       converted to floating point */

    	    fahr = fahr + step;
	}
}
