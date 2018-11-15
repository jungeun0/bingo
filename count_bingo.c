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
	//i가 일정할 때,0의 갯수를 세서 0이 N개일 경우, 가로줄 1줄추가
	
	
	
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
	}//j가 일정할 때,0의 갯수를 세서 0이 N개일 경우, 가로줄 1줄추가
	
	return res;		
}
