#include <stdio.h> 	/* Preprocessor to put header from standard input */
			/* and output libraries into this file */

/* always declare variables (and functions) before calling them */

/*  PLEASE, THE COMMENT SLASH IS FORWARD SLASH! */

/*  DON'T FORGET THOSE SEMICOLONS  */

/*  Before defining functions, you must declare them BEFORE calling main() */
/*  http://irc.essex.ac.uk/www.iota-six.co.uk/c/d4_functions.asp  */

/* Always put commas AFTER the end quote of string in printf()  */
/* if printing more stuff or if specifying an argument. */

/* USING THREE CALLS TO FUNCTIONS THAT UTILIZE SCANF() IN A ROW */
/* WHY OH WHY DOES SCANF() ACCEPT THE RETURN I TYPED TO ENTER IN THE LAST */
/* INPUT AS THE INPUT FOR THE NEXT CALL TO SCANF()? */
/*  http://www.cplusplus.com/reference/clibrary/cstdio/scanf.html */
/* scanf() reference doesn't help really, but just looking at the
   example i wonder why main() can return a value without storing it to
   anything.  maybe my whole() and letter() functions can have "return 0;"
   and be called without storing the returned value to anything, like main() */

/* the data type returned by the function has nothing to do with it. 
   putting getchar() inbetween will catch the returns i type after input.  */

int  whole();
void letter();
double num();

int main()  	/* Function main that returns an integer value */
{
        double value;
        printf("Hello world! \n ");			/* \n for a newline */
	/* whole();
	/* letter();
        /* value = num();
	/* printf( "The distance around the Earth is %f", value);
	/* printf("\n");
	/* printf("(Hit Return to end program) \n ");  	/* parenthesis ok */
	/* getchar();					/* waits for input */
	/* however, when commands are placed before getchar() that ask for
	   input, getchar() doesn't wait for you but takes the input from
	   when you pressed return after giving input to the preceeding 
	   command as it's cue to allow processing to proceed. */
	/* so i'm putting my commented out commands below now */
	printf("(Hit Return to continue) \n ");  /* instead of "Return to end" */
	getchar();  /* getchar() must follow the prompt to wait for me to hit return*/
	whole();
/*	getchar(); This call to getchar() is now included IN THE FUNCTION DEFINITION. */
	letter();
/*	getchar(); DITTO.  */
        value = num();
	printf( "The distance around the Earth is %f miles. \n", value);
	/* I kind of want something at the end though to wait for input
	   before terminating.  But with all those inputs before it,
	   how can i catch a new input?  Perhaps place two  getchar(),
	   one to catch the return from num() and one to actually wait
	   wait for me.  */
/*	getchar(); */
	printf("(Hit Return to end program) \n ");
	getchar();
	/* and maybe if i sprinkle some getchar() between my calls to
	   functions that use scanf(), maybe i can get it to wait for me
	   to put something in and not continue on without me, so by the 
	   time it gets to this last getchar(), it only has the one return
	   from num() to catch.  now, also, the "return" after running 
	   whole() makes letter() run without letting me get in another input
	   so that it proceeds to num() with no input to give it, thus it
	   asks me for more.  so now, with a getchar() after whole to catch
	   it's "Return", letter() will ask me for input, and i'll give it
	   that and a return, so i better put a getchar() after letter to catch
	   that so my num() doesn't start getting skipped. */
	/* In a printf call with a format specifier, the format specifier need
		not be the last character in the printed string.  */

	/* EVEN BETTER, PUT THE EXTRA GETCHAR() CALLS WITHIN THE FUNCTION DEFINITIONS! */

	return 0;			/* an integer must be returned */
	
}

int whole()	/* takes in a number and spits it back out */
{
	int j;
	printf( "Please enter a whole number: " );
	scanf( "%d", &j );  
		/* tell scanf to get typed thing and then where to store it */
		/* %d tells scanf the thing it's picking up is an integer */
		/* scanf is going to store the typed thing in a var(iable) */
		/* &<var> means address of that var used for storage */
	getchar();
	/* put a getchar() after scanf() to catch the return typed after input,
	   this keeps that keystroke of "return" from being passed to any future
	   calls to scanf() as premature input. */
	printf( " \n You entered %d", j);
		/* %d is a heads-up to printf that the variable to follow */
		/* is an integer */
	printf("\n");
	return 0;
}

void letter()  /* I just wanted to make one "void" to demonstrate that return data type */
/* and then the other function, "whole()", would return an integer even though it didn't need
 to and i could still call the function without passing the returned data to a variable */
{
	char letta;
	printf( "Please enter a single character: " );
	scanf( "%c", &letta );  
	getchar();
	printf( " \n You entered %c", letta);
	printf( "\n" );
	/* These percent thingies in C are format specifiers */
	/* The thing following them outside the quotes is the argument. */
	/* see www.eskimo.com/~scs/cclass/notes/sx6a.html for a list of them */
	/* %d is to print an integer argument in decimal format */
	/* %f is to print a float or double */
	/* %e prints a float or double in scientific notation */
	/* %c prints a character */
	/* %s prints a string */
	/* %% the escape sequence for printing the percent character */
	/* On the second printf, we tell system to print in format of */
	/* character and what variable data to put in that format.  */
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
