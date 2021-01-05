#include<stdio.h>
#include <string.h>
#include "txtfind.h"

int getLine(char s[]){
	int i, j = 1;
   	while(s[i] != '\0'){
     		if(s[i] == '\n'){
       		j++;
     		}  
  		i++;
   	}
   	return j;
}

int getword(char w[]){
    	int counter = 1, i = 0;
    	while(w[i] != '\0'){
       	if(w[i] == ' ' || w[i] == '\n' || w[i] == '\t'){
          		counter++;
          	}	
    		i++;
    	}
    	return counter;
}

int substring(char *str1, char *str2){
  	int n = 0, k = 0;
  	while (*str2 != '\0') {
    		k++;
    		str2++;
  	}
  	str2 = str2 - k;
  	
  	while (*str1 != '\0') {
    		while (*str2 == *str1 && *str2 != '\0') {
      			n++;
      			str2++;
      			str1++;
    		}
    			if (n == k) {
      				return 1;
    			}
    		n = 0;
    		str1++;
  	}
  	return 0;
}


int similar(char *s,char *t, int n){
  	int i = 0, j = 0, count = 0;
  	int lens = strlen(s), lent = strlen(t);

     	if(lens < lent){
        	return 0;
        }	
     	if(lens == lent){
      		while(*(s+i) != '\0' && *(t+j) != '\0'){
         		if(*(s+i) != *(t+j)){
            			return 0;
            		}
       		i++;
       		j++;
    		}
     		return 1;
   	}
    	if(lens > lent){
      		while(*(s+i) != '\0' && *(t+j) != '\0'){
        		if(*(s+i) != *(t+j)){
          			i++; 
        		}
       		if(*(s+i) == *(t+j)){
          			count++;
       		}  
      			i++;
      			j++;
     		}
   		if(lens-count == n){
       		return 1;
    		}
    
  	}    
	return 0; 
}

