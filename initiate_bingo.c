#include <stdio.h>
#include <stdlib.h>
#define N 3
#include <time.h>

int initiate_bingo(int X[N][N]){
		int i;
		int j;
		int a=0;
		int b;
		int C[N*N];
		int rnd;
		
		srand((unsigned int)time(NULL));
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				X[i][j] = 0;
			}
		}
		for(i=0;i<N*N;i++){
			C[i]=0;
		}
			
	
	/*	for(i=0;i<N;i++) {
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
				
				if(C[a]==0 ){
					j--;
					printf("랄라\n");}
				else{
					a++;
					X[i][j] = rnd;
					
					printf("배열값 %d ",X[i][j]); 
					}			
			}
			printf("c");
			printf("\n");	
		}	
		//1-3 */
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				while (1) {
					rnd = rand()%(N*N)+1;
					if(C[rnd]==0){
						X[i][j]=rnd;
						C[rnd] = 1;
					//	printf("아 ");
						break;
					} 
				}
			}
		}
		
		
		
		return (X[N][N]);
}	

