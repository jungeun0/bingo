#include <stdio.h>
#include <stdlib.h>
#define N 5
#include <time.h>

int initiate_bingo(int X[N][N]){
		int i;
		int j;
		int C[N*N];
		int rnd;
		
		
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				X[i][j] = 0;
			}//������ �ʱ�ȭ 
		}
		for(i=0;i<N*N;i++){
			C[i]=0;
		} //c �迭 �ʱ�ȭ 
			

		
		for(i=0;i<N;i++){ 
			for(j=0;j<N;j++){
				while (1) {
					rnd = rand()%(N*N)+1; 
					if(C[rnd-1]==0)//c �迭�� 0�� ��� --> ������ ���õ� ���� ���� ���
					{
						X[i][j]=rnd;
						C[rnd-1] = 1;//c �迭 1�� ���� --> rnd-1�� ���õǾ��ٴ� ���� �˸� 
						break;
					} 
				}
			}
		}
		
		
		
		return (X[N][N]);
		
		
}	

