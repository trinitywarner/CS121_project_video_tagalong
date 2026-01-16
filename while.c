#include <stdio.h>
#include <string.h>

int main(){
	char response[10];
	strcpy(response, "no");

//only a condition goes here v
	while(strcmp(response, "yes") != 0){
		printf("Are we there yet? ");
		scanf("%s", response);
	} // end while
	printf("Can we go home now?" \n");

	return 0;
} //end main

