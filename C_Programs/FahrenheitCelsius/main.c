/* Tables of Fahrenheit and Celsius Values
 * The C Programming Language, Sections 1.2-1.4
 * Author: Eliot Cowley
 * 
 * Displays tables of Fahrenheit degrees and their equivalents in Celsius using a variety of methods.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
 main()
 {
	 /* fahrenheit to celsius
	  * declare variables */
	 float fahr, celsius;
	 int lower, upper, step;
	 
	 /* initialize variables */
	 lower = 0; /* lower limit of temperature table */
	 upper = 300; /* upper limit */
	 step = 20; /* step size */
	 fahr = lower;
	 
	 printf("Fahrenheit\tCelsius\n\n"); /* header */
	 
	 while (fahr <= upper) {
		 celsius = (5.0/9.0) * (fahr-32.0);
		 printf("%3.0f\t\t%6.1f\n", fahr, celsius); /* fahrenheit is a float at least 3 characters wide w/no decimal point; 
		  * celsius is a float at least 6 characters wide w/1 decimal point */
		 fahr = fahr + step;
	 }
	 
	 /* celsius to fahrenheit */
	 celsius = lower;
	 
	 printf("\nCelsius\t\tFahrenheit\n\n");
	 
	 while (celsius <= upper) {
		 fahr = ((9.0 / 5.0) * celsius) + 32.0;
		 printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		 celsius = celsius + step;
	 }
	 
	 /* for loop variation */
	 int f;
	 
	 printf("\n");
	 printf("For loop variation\n\n");
	 
	 for (f = 0; f <= 300; f = f + 20) {
		 printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
	 }
	 
	 /* reverse order */
	 printf("\n");
	 printf("Reverse order\n\n");
	 
	 for (f = 300; f >= 0; f = f - 20) {
		 printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
	 }
	 
	 /* symbolic constant variation */
	 #define LOWER 0 /* no semicolon after define statement */
	 #define UPPER 300
	 #define STEP 20
	 
	 printf("\n");
	 printf("Symbolic constant variation\n\n");
	 
	 for (f = LOWER; f <= UPPER; f = f + STEP) {
		 printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
	 }
 }