//hiUser.c
//asks users name an dincludes in greeting

/* this is a multiline
 * comment, wow, magical
 */

#incldue <stdio.h>

int main(){
	char name [20];
	printf("What is your name? ");
// this is a function, similar to the print, takes a format code and address to put the thing.
// where it goes in memory
	scanf("%s", name);
	printf("Hi, %s! \n", name);

	return (0);
} // end main

