// forloops are used when you know how many times something is going to happen

#include <stdio.h>

// create with a counting vairbale
int main(){
	int i = 0;
	// how does it start, end, and change -- the for clause
	// i is 10, keep going if it is above 0, subtract 1 from i each time
	for (i = 10; i > 0; i--){
		printf("%d ", i);
	} // end for
	return 0;
} // end main
