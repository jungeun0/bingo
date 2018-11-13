#include <stdio.h>
#include <stdlib.h>
#define N 3
#include <time.h>

int initiate_bingo(int X[N][N]){
		int i;
		int j;
		int a=0;
		int b;
		int C[N^2] = {1};
		int rnd;
		
		srand((unsigned int)time(NULL));
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				X[i][j] = 0;
			}
		}
		
			
	
		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
				X[i][j] = rand() % (N*N) + 1;
				C[a] = X[i][j];
				for(b=N*N;b>0;b--){
					if(C[a] == C[b]){
						C[a]=0;
						X[i][j]=0;
						j--;
						break;
					}
				}
				if(C[a] != 0){
					a++;}			
			}	
		}	
		//1-3
		return (X[N][N]);
}	

