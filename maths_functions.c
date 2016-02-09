<<<<<<< HEAD
#include <stdio.h> //This is the line causing issue in the master branch
=======
#include <stdio.h> //This is the line causing issue in the conflict branch
>>>>>>> conflict
//This program calculates the sum of x + y
int main()
{

	int x = 7;
	int y = 2;
	printf("%i + %i = %i\n", x, y, x+y); //adds X + Y test
	printf("%i - %i = %i\n", x, y, x-y); //Subtracts X-Y
	printf("%i * %i = %i\n", x, y, x*y); //Multiplies X*Y
	printf("%i / %i = %i\n", x, y, x/y); //divides X/Y
	printf("%i remainder %i = %i\n", x, y, x%y); //Testing the remainder function
	return 0;
}



