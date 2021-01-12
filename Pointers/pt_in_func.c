#include <stdio.h>
//does not work
void fake_curve_down(char grade){
	grade ++;
}
//does work
//received the pointer of the grade
void proper_curve_down(char *grade){
	// dereferce the grade, and change it
	(*grade)++;
}

int main(){
	char aln_grade = 'A';
	char kv_grade = 'C';
	fake_curve_down(aln_grade);
	// need to send a memory address of the letter grade
	proper_curve_down(&kv_grade);
	printf("alina achieved %c\n", aln_grade);
	printf("kevin achieved %c\n", kv_grade);
}