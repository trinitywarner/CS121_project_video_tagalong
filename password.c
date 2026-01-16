#include <stdio.h>
#include <string.h>

#define TRUE -1
#define FALSE 0

int main(){
	int keepGoing = TRUE
	char* correct = "CS121";
	char guess[10];
	int turns = 0;	

while (keepGoing){
	turns++;
	printf("Please enter the password: ");
	scanf("%s", guess);

	if (stcmp(guess, correct) == 0){
		printf("You got it!");
		keepGoing = False;
	} else {
		if (turns >= 3){
			printf("Too many tries, launching missiles.");
			keepGoing = FALSE;
		} //end if
	} //end if
} // end while
return 0;
} // end main

