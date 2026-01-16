#include <stdio.h>
#include <string.h>

int main(){
	char response[10];
	strcpy(response, "no");
	int keepGoing = 1;

//only a condition goes here v
//	while(strcmp(response, "yes") != 0){
//	while keepGoing indicates that if the answer is no, the loop will keep going, asking the same question until it gets the desired answer, AKA, 'yes'
	While(keepGoing){
		printf("Are we there yet? ");
		scanf("%s", response);
		if (strcmp(reponse, "yes") == 0){
			// if they answer yes, this is where it will end, with keepGoing setting to 0 so it does not repeat. Ending with "Can we go home now?"
			keepGoing = 0;
		} // end if
	} // end while
	printf("Can we go home now?" \n");

	return 0;
} //end main

