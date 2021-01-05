#include<stdio.h>
#include "isort.h"

void shift_element(int *arr, int i) {
	for(int n = i; 0 < n; n--) {
		*(arr + n) = *(arr + n - 1);
	}
}

void insertion_sort(int *arr, int len) {
	int j, k;
	for(int i = 1 ; i < len; i++){
		j = *(arr + i);
		k = i - 1;
		while( k >= 0 && *(arr + k) > j){
			*(arr + k + 1) = *(arr + k);
			k = k - 1;
		}
		*(arr + k + 1) = j;
	}
}
