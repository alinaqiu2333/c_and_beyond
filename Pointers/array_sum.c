#include <stdio.h>
int get_sum(int *L, int size){
	int count = 0;
	for (int i = 0; i<size; i++){
		count += L[i];
	}
	return count;
}
int main(){
	int L[5] = {1, 2, 3, 4, 5};
	printf("total is %d\n",get_sum(L, 5));
	return 0;
}