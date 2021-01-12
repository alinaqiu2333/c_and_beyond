#include <stdio.h>
int main (){
	int i = 10;
	int *pt_i = &i;
	// this is the value of i, which is 10
	printf("%d\n", i);
	printf("%d\n", *pt_i);
	// this pointer of i, pt_i
	printf("%p\n", pt_i);
	printf("%p\n", &i);
	// this is the pointer of pointer 
	printf("%p\n", &pt_i);
	return 0;
}
