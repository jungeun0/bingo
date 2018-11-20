#include <stdio.h>
#include <stdlib.h>
#define N 5 //1-1
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
	
	
	for(i=0,j=0;i<N&&j<N;i++,j++){
			if(Z[i][j]==0){
				score++;
			}
		}
	
	if(score == N){
		res++;
		score = 0;
	}
	else{
		score = 0;
	}
	//for문을 이용해 왼쪽에서 오른쪽으로 내려오는 대각선 줄이 생성되었는지 확인
	for(i=0,j=N-1;i<N&&j>=0;i++,j--){
			if(Z[i][j]==0){
				score++;
			}
		}
	//i는 0의 인덱스부터, j는 N-1의 인덱스부터 for문을 돌려 오른쪽에서 왼쪽으로 내려오는 대각선 줄이 생성되었는지 확인 
	if(score == N){
		res++;
		score = 0;
	}
	else{
		
		score = 0;
	}	
	
	return res;		
}
