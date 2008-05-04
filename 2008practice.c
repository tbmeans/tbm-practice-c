#include <stdio.h> 	/* Preprocessor to put header from standard input */
			/* and output libraries into this file */

/* always declare first, then call main(), then define functions. */
int  whole();
void letter();
double num();

int main()  /* main() is not void in C.  Return values need not be assigned to vars. */
{
        double value;
        printf("Hello world! \n ");			/* \n for a newline */
	printf("(Hit Return to continue) \n ");
	getchar();  /* getchar() must follow the prompt to wait for me to hit return*/
	whole();
	letter();
        value = num();
	printf( "The distance around the Earth is %f miles. \n", value);
	printf("(Hit Return to end program) \n ");
	getchar();
	return 0;			
	
}

int whole()	/* takes in a number and spits it back out */
{
	int j;
	printf( "Please enter a whole number: " );
	scanf( "%d", &j );  
		/* tell scanf to store typed thing at address of variable */
	getchar();
	/* put a getchar() after scanf() to catch the return typed after input,
	   this keeps that keystroke of "return" from being passed to any future
	   calls to scanf() as premature input. */
	printf( " \n You entered %d", j);
		/* provide a format specification with %_ for variable to be printed */
		/* variable to be printed is called the argument of the format spec */
	printf("\n");
	return 0;
}

void letter()
{
	char letta;
	printf( "Please enter a single character: " );
	scanf( "%c", &letta );  
	getchar();
	printf( " \n You entered %c", letta);
	printf( "\n" );
	/* %d is to print an integer argument in decimal format */
	/* %f is to print a float or double */
	/* %e prints a float or double in scientific notation */
	/* %c prints a character */
	/* %s prints a string */
	/* %% the escape sequence for printing the percent character */
}

double num()
{
	float x, y, z;
	printf( "Please enter a real number: \n " );
	scanf( "%f", &x );
	getchar();
	printf( "You entered %f", x);
	printf("\n");
	if ( x == 0 ) 
	    printf( "That's boring.  We'll just do it ourselves. \n " );
	else 
	    printf( "That's nice.  Now for a random factoid. \n ");
	z = 3.14159;  /* Pi~ */
	y = z * 2 *  3959.873;  /* Quadratic mean Earth radius in miles. */
	return y;
	
}	/* always hit return to make a blank line at the end of a program */
