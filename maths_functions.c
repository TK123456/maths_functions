#include <stdio.h>
//This program calculates the sum of x + y
int main()
{
    int x = 7;
    int y = 2;
    printf ("%i + %i = %i\n", x, y, x+y); //adds X + Y test
    printf ("%i - %i = %i\n", x, y, x-y); //Subtracts X-Y
    printf ("%i * %i = %i\n", x, y, x*y); //Multiplies X*Y
    printf ("%i / %i = %i\n", x, y, x/y);//Divides X/Y
    printf ("%i remainder %i = %i\n", x, y, x%y); //Remainder of x and y
    return 0;
}

float min (float x, float y)
{
    if ( x > y)
    	    return y;
    else 
    	    return x;
}
float max (float x, float y)
{
    if ( y > x)
    	    return y;
    else 
    	    return x;
    
}


