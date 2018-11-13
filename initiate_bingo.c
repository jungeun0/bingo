#include <stdio.h>
#include <stdlib.h>
#define N 3
#include <time.h>

int initiate_bingo(int X[N][N]){
		int i;
		int j;
		int a=0;
		int b;
		int C[N*N] = {1};
		int rnd;
		
		srand((unsigned int)time(NULL));
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				X[i][j] = 0;
			}
		}
		
			
	
		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
				rnd = rand()%(N*N)+1;
				C[a] = rnd;
					for(b=N*N;b>0;b--){
						if(C[b] == C[a]){
						C[a]=0;
						rnd=0;	
						printf("a");
						break;
						
						}
						else{
						printf("b");
						}
					}				
				
				if(C[a]==0 ) {
					j--;}
				else{
					a++;
					X[i][j] = rnd;
					printf("¹è¿­°ª %d ",X[i][j]); 
					}			
			}
			printf("c");
			printf("\n");	
		}	
		//1-3
		return (X[N][N]);
}	

