/* atan example */
#include <stdio.h>      /* printf */
#include <math.h>       /* atan */
#include <conio.h>		/* _getch() */

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

#define PI 3.14159265

int main(){
	double param, result;
	param = 1.0;

	result = atan(param) * 180 / PI;
	printf("The arc tangent of %f is %f degrees\n", param, result);

	_getch();
	return 0;
}