/* 
	ECPI University 
	Rafat Khandaker
	August, 26, 2018
	Final Exam - CIS126 Program 2, Dr. Malone

	Using string library to compute the length & compare 2 strings
*/
	// Include libraries
#include <stdio.h>
#include <string.h>
	
	// Include function prototypes
char* compareString(char* str1, char* str2);

	// Include main function
int main ( void )
{
	// initialize element array
	char element0[100] = "The quick brown fox jumps over the lazy dog.";
	char element1[25];
	char element2[25];

	printf("Displaying the length of the 100-element array:\n\t%s\n\tLength: %d\n\n", 
		element0, strlen(element0)
	);  // display element 0
	
	strcpy(element1, "Dog");
	strcpy(element2, "Dog");

	printf("Are these two strings equal? (%s) & (%s) : %s\n\n",
		element1, element2, compareString(element1, element2) 
	);  // comparing like strings

	strcpy(element2, "Cat");

	printf("Are these two strings equal? (%s) & (%s) : %s",
		element1, element2, compareString(element1, element2)
	); // comparing unlike strings


	getchar(); // placeholder
	return 0;
}

char* compareString(char* str1, char* str2)
{
	return strcmp(str1, str2) == 0 ? "True" : "False";
}



