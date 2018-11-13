#include <stdio.h>
#include <stdlib.h>
#define N 3

void initiate_bingo(int MyBingo[N][N],int NotMyBingo[N][N]){
		int i;
		int j;
		int a=0;
		int b;
		int C [N^2];
		
		srand((unsigned int)time(NULL));
	
		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
				MyBingo[i][j] = rand() % (N^2);
				C[a] = MyBingo[i][j];
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
	return ;
}	

