#include <stdio.h>
#include <stdlib.h>
#define N 5 //1-1
#define M 3	//1-2
#include <time.h>
#include "initiate_bingo.h"	
#include "get_number_byMe.h"	
#include "process_bingo.h"
#include "get_number_byCom.h"
 
int main(int argc, char *argv[]){
	
	int k=0;
	int j=0;
	int n = 1;
	int MyBingoNum = 0;
	int ComBingoNum = 0;
	int MyBingo[N][N];
	int ComBingo[N][N];
	int MIAOW[N*N] = {0}; //빙고게임을 하며 숫자를 입력받을 때 중복된 수인지 아닌지 확인하는 배열 

	srand((unsigned int)time(NULL));
	
	printf("--------------------\n");
	printf("    game start!     \n");

	initiate_bingo(MyBingo);

	initiate_bingo(ComBingo);
	
	printf("나의 빙고판 \n");
		
	print_bingo(MyBingo);
		
	printf("상대방의 빙고판 \n");
		
	print_bingo(ComBingo); 
		
	
	
	while(1){
		
		printf("%d 번째 판입니다. \n",n); 
		while(1){
			k = get_number_byMe(); //사용자에게 받은 값을 변수에 저장 
			if(MIAOW[k]==0){ //처음 받는 변수인 경우 
				MIAOW[k] = 1;  //변수를 받았다고 표시 
				break;
			}
			else if (MIAOW[k]== 1){
				printf("이미 선택된 수입니다. 다른 수를 선택해주세요.\n");
			}
			
		}
		process_bingo(MyBingo,ComBingo,k);
		
		printf("나의 빙고판 \n");
		
		print_bingo(MyBingo);
		
		printf("상대방의 빙고판 \n");
		
		print_bingo(ComBingo); 
		
		
		MyBingoNum = count_bingo(MyBingo);
		
		printf("내 빙고의 줄 수는 %d\n",MyBingoNum);
		
		ComBingoNum = count_bingo(ComBingo);
		
		printf("상대방 빙고의 줄 수는 %d\n",ComBingoNum); 
		 
		while(1){
			k = get_number_byCom();
			if(MIAOW[k]==0){
				MIAOW[k] = 1;
				break;
			}
		}
		process_bingo(MyBingo,ComBingo,k);
		
		printf("나의 빙고판 \n");
		
		print_bingo(MyBingo);
		
		printf("상대방의 빙고판 \n");
		
		print_bingo(ComBingo); 
		
		MyBingoNum = count_bingo(MyBingo);
		
		printf("내 빙고의 줄 수는 %d\n",MyBingoNum);
		
		ComBingoNum = count_bingo(ComBingo);
		
		printf("상대방 빙고의 줄 수는 %d\n",ComBingoNum); 
		
		 
		n++;//빙고가 몇 번째 판인지 세는 변수  
		
	
		 
	}
		
	return 0;	
		
	
}
	
