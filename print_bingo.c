#include <stdio.h>
#include <stdlib.h>
#define N 3

void print_bingo(int Y[N][N]){

	int i;
	int j;
	
	printf("------\n"); 
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",Y[i][j]);
		}
		printf("\n");
	}
	printf("------\n\n"); 
	printf("³ªÀÇ ºù°íÆÇ\n");
}
