#include <stdio.h>

int main(){

	// c is strictly typed
	int myInteger = 1;
	// integers cannot be decimals
	long myLong = 2;
	// integer with twice as much space
	float myFloat = 3;
	// can handle decimal points
	// must be truthful, if decimal, we use this
	double myDouble = 4;
	// can use decimals here, too
	//
	char myChar = 'A';
	// character, not a string
	// numeric data chart
	// single quotes are for a specific thing
	char myOtherChar = 65;
	// numeric data chart example

	// printing out the various types
	// interprelation
	// uses special opporators to do something
	// %d base 10 decimal, print
	// %b is to print in binary
	// %ld stands for long decimal
	// %f print in float format
	// %1f is longfloat
	// %c print the character things
	printf("myInteger: %d \n", myInteger);
	printf("myLong: %1d \n", myLong);
	printf("myFloat: %f \n", myFloat);
	printf("myDouble: %1f \n", myDouble);
	printf("myChar: %c \n", myChar);
	printf("myOtherChar: %c \n", myOtherChar);
	printf("\n");

	// casting and chanaging data representations
	// (int) is a cast operator that allows us to print it out in %d
	printf("cast float to int: %d \n", (int)3.1415);
	printf("binary rep of myChar: %b \n", myChar);
	printf("hex rep of myChar: %x \n", myChar);
	printf("\n");

	// looking at the size of things
	// size operator allows us to convert to one other thing
	// prints these here into bytes
	printf("size of int: %d bytes \n", (int)sizeof(myInteger));
	printf("size of long: %d bytes \n", (int)sizeof(myLong));
	printf("size of float: %d bytes \n", (int)sizeof(myFloat));
	printf("size of double: $d bytes \n", (int)sizeof(myDouble));
	printf("size of char: %d bytes \n", (int)sizeof(myChar));

	// what if we try to add an integer and a float?
	// 2 different examples: ... but the top one will need to fix the error, so treat it as a float
	// printf("int + float: %d \n", myInteger + myFloat);
	printf("int + float: %f \n", myInteger + myFloat);
	printf("\n");

	// arrays are sequential assignments
	// 10 integers touching each other in memeory
	int myIntArray[10];
	printf("size of array of 10 ints: %d bytes \n", (int)sizeof(myIntArray));
	printf("length of array: %d elements \n", (int)sizeof(myIntArray)/(int)sizeof(myIntArray[0]));

	// there is no string type!!
	// just an array of chars!!
	
	char text[10];

	// %s is as close as we will get for a string
	printf ("text: |%s| \n", text);

	printf("size of text: %d bytes \n", (int)sizeof(text));
	return 0;
}




	
