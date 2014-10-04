#include <stdio.h> 
/* "... [the first line of your program] tells the compiler to include 
information about the standard input/output library; this line appears 
at the beginning of many C sources files." (K&R, 6) */

main() /* this function main receives no argument values */
{
    /* "...'main' is a special-- your program begins executing at the beginning
       of main. This means that every program must have a main somewhere."
       (K&R, 6) */

    printf("hello, world\n");
    /* in this main, it calls the library function printf to print
       this sequence of characters; \n represents the newline character */

    /* other escape sequences that printf recognizes are:
       \t for tab
       \b for backspace
       \" for double quotes
       \\ for backslash
       and more... */
}
