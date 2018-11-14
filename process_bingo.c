#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1


void process_bingo(int X[N][N],int Y[N][N],int num){
	
	int i;
	int j;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if (X[i][j] == num){
				X[i][j] = 0;}
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if (Y[i][j] == num){
				Y[i][j] = 0;}
		}
	}
	
}
