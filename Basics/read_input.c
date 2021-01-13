#include <stdio.h>
int main(){
	double num1, num2;
	printf("please enter two numbers\n");
	scanf("%lf%lf", &num1, &num2);
	printf("their sum is %.2f\n", num1+num2);
}