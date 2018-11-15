#include <stdio.h>
#include <stdlib.h>
#define N 5

void print_bingo(int Y[N][N]){

	int i;
	int j;
	
	printf("--------------------\n"); 
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%3d ",Y[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n\n"); 
	}
