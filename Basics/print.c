#include <stdio.h>
// for string
int main(){
	printf("this is how to print a string\n");
	int num = 10;
	printf("and here is number %d\n", num);
	double fl = 2.33333;
	printf("oh here is a float %f\n", fl);
	// what if we want only two digits after decimal point??
	printf("just to see if two-digit after decimal point works %.2f\n", fl);
	printf("and it DOES!!\n");
	//fun fact: double (15-16 signif digit) is more percise than float (6-7 signif digit)

	return 0;
}
