#include<stdio.h>
void main(){

    int j;
    int i;
    int k;
    for(i=0;i<=10;i++){
        for(j=0;j<(10-i);j++){
            printf("  ");
        }
        for (k=0;k<=i*2;k++){
        	
		printf("*")  ; 
        }
    printf("\n");

    }
getchar();
} 
