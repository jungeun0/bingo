#include <stdio.h>
#include <stdlib.h>
#define N 3
#include <time.h>

int initiate_bingo(int X[N][N]){
		int i;
		int j;
		int C[N*N];
		int rnd;
		
		
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				X[i][j] = 0;
			}//빙고판 초기화 
		}
		for(i=0;i<N*N;i++){
			C[i]=0;
		} //도우미 배열 초기화 
			

		
		for(i=0;i<N;i++){ 
			for(j=0;j<N;j++){
				while (1) {
					rnd = rand()%(N*N)+1; 
					if(C[rnd-1]==0)//도우미 배열이 0인 경우 --> 난수가 이미 선택되지 않은 경우
					{
						X[i][j]=rnd;
						C[rnd-1] = 1;//도우미 배열 1로 만듬 --> rnd-1은 선택되었다는 것을 알림 
						break;
					} 
				}
			}
		}
		
		
		
		return (X[N][N]);
		
		
}	

