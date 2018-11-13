#include <stdio.h>
#include <stdlib.h>
#define N 3

int initiate_bingo(int MyBingo[N][N],int NotMyBingo[N][N]){
		int i, j;
		int a=0;
		int b;
		int C [N^2];
		
		srand((unsigned int)time(NULL));
		
		//중복되지 않는 난수 생성..........! 
		for (i=0;i<N;i++) {
			for(j=0;j<N;j++){
				MyBingo[i][j] = rand() % (N^2);
				C[a] = MyBingo[i][j];
					for(b=a;b>0;b--){
						if(C[a]==C[b]){
							C[a]=0;
							break;
						}
				if(C[a] == 0){
					j--;
					}		
				}	
		}	
		//1-3
		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
			NotMyBingo[i][j] = rand() % (N^2);
				}	
          }
	return;
		/*1. 빙고판 만들기
		1.  N값을 입력받음 --> 기호 상수로 입력 받아서 빙고판 만들 때 활용
		2.  M값을 입력받음 --> 기호 상수로 입력 받아서 줄 수로 활용
		3.  N^N 배열의 이차원 배열 생성, 랜덤으로 숫자 1~N^2까지 채워넣기
			--> 랜덤으로 수를 채워넣기
		4.  같은 작업을 한번 더 반복 --> 컴퓨터의 빙고판 생성*/


}	

