#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2


int count_bingo(int Z[N][N]){
	
	
	int i;
	int j;
	int score=0;
	int res=0;
	
	
	
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(Z[i][j] == 0){
				score++;
			}
		}
		if (score == N){
			res ++;
			score = 0;
		}
		else {
			score = 0;
		}
	}
	//i�� ������ ��,0�� ������ ���� 0�� N���� ���, ������ 1���߰�
	
	
	
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			if(Z[i][j] == 0){
				score++;
			}
		}
		if (score == N){
			res ++;
			score = 0;
		}
		else {
			score = 0;
		}
	}//j�� ������ ��,0�� ������ ���� 0�� N���� ���, ������ 1���߰�
	
	return res;		
}
