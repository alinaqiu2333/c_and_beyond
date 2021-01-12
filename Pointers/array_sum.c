#include <stdio.h>
int get_sum(int *L, int size){
	int count = 0;
	for (int i = 0; i<size; i++){
		count += L[i];
	}
	return count;
}
void change_first_element(int L[5]){
	L[0] = 100;
}
int main(){
	int L[5] = {1, 2, 3, 4, 5};
	change_first_element(L);
	printf("total is %d\n",get_sum(L, 5));
	return 0;
}