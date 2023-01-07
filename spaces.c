#include <stdio.h>

int main () 
{
	int radius; //the distance of half the diameter of a circle
	
	printf("Please enter a radius:") ;
	scanf("%i", &radius) ; //address-of operator
	
	double area = 3.14159 * (radius * radius);
	printf("The area of a circle with %i radius is %f\n", radius , area) ;
	return 0;
	
}	
