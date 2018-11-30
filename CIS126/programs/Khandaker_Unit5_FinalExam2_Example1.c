/* 
	ECPI University 
	Rafat Khandaker
	August, 26, 2018
	Final Exam - CIS126 Program 1, Dr. Malone

	The purpose of this program is to calculate the hypotenuse of a right triangle
*/
	// Include libraries
#include <stdio.h>
#include <math.h>

	// Define Prototype Function
double Calculate(double x, double y);

	// Include main function
int main ( void )
{
	// initialize array
	double Table[4][3] = { {3,4},{5,7},{8.9,10},{10.5,15} };

	printf("\t\t\t Triangle Hypotenuse Calc Table \n\n\t\t%-15s%-15s%-15s\n", "Side A", "Side B", "Hypotenuse C");
	printf("_______________________________________________________________________________\n");

	for (int y = 0; y < 4; y++) 
	{
		double value = Table[y][2] = Calculate(Table[y][0], Table[y][1]);	

		printf("%d\t\t", (y+1) );

		for (int x = 0; x < 3; x++) { printf( "%-15.3lf", Table[y][x] ); }
		puts("");
	}

	getchar(); // placeholder
	return 0;
}

double Calculate(double x, double y) 
{
	return sqrt( pow(x, 2) + pow(y,2) );
}

