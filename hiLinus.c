#include <stdio.h>
#include <string.h>

// currently broken on purpose
// hi Linus
// illustrates string functions and if statements
int main(){
	char userName[20];
	char correct[20];

	// this v will get marked as an error, so we have the string function thats treats the string characters as a string.
	//correct = "Linus";
	strcpy(correct, "Linus");
	// converts to array of character and adjust the correct length
	// way to do it in C ^^

	printf("Correct is %s" \n", correct);
	//new line of code for above issue

	printf("What is your name? ");
	scanf("%s", userName);

	// this v is the correct solution, so you can get the right end value
	if (strcmp(userName, correct) == 0){
	//if (userName == correct){
		printf("Thanks for inventing Linux. \n";
	} else {
		printf("Have you seen Linus around? \n");
	} // end if
	
	return 0;

