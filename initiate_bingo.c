#include <stdio.h>
#include <stdlib.h>
#define N 3

int initiate_bingo(int X[][]){
		int i;
		int j;
		int a=0;
		int b;
		int C [N^2];
		
		srand((unsigned int)time(NULL));
	
		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
				X[i][j] = rand() % (N^2);
				C[a] = X[i][j];
					for(b=a;b>0;b--){
						if(C[a] == C[b]){
							C[a]=0;
							break;
						}
					}
				if(C[a] == 0){
					j--;
					break;
					}
				a++;			
				}	
		}	
		//1-3
	return (X[]][]);
}	

