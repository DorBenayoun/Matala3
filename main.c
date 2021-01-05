#include<stdio.h>
#include<stdlib.h>
#include "isort.h"
#define SIZE 50

int main(){
	int arr[SIZE];			
 	for(int i = 0;i < SIZE; i++){
    		printf("enter number: ");
    		scanf("%d", (arr+i));
	}
  	insertion_sort(arr,SIZE);
  	for(int i = 0; i < SIZE; i++){
		printf("%d", *(arr+i));
		if(i == 49){
       		break;
     		}
   		printf(",");
  	}
  	printf("\n");
  	return 0;
}
