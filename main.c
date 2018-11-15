#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
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
	
	int MyBingo[N][N];
	int NotMyBingo[N][N];
	int MIAOW[N*N] = {0}; //빙고게임을 하며 숫자를 입력받을 때 중복된 수인지 아닌지 확인하는 배열 

	srand((unsigned int)time(NULL));
	
	initiate_bingo(MyBingo);

	initiate_bingo(NotMyBingo);
	
	print_bingo(MyBingo);//2-1
	
	//print_bingo(NotMyBingo);
	
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
		process_bingo(MyBingo,NotMyBingo,k);
		
		print_bingo(MyBingo);
		 
		while(1){
			k = get_number_byCom();
			if(MIAOW[k]==0){
				MIAOW[k] = 1;
				break;
			}
		}
		process_bingo(MyBingo,NotMyBingo,k);
		
		print_bingo(MyBingo);
		
		
		 
		n++;//빙고가 몇 번째 판인지 세는 변수  
		
	
		 
	}
		
	return 0;	
		
	
}
	
        /* 
		
			2.빙고 게임 시작
		1. 빙고판  상태를 화면에 표시
		2. 숫자를 선택하라고 출력하고, 나중에 숫자를 입력
		3. 입력받은 숫자가 배열 속에 있다면, 포인터를 이용해 -1값으로 표시
		4. 컴퓨터의 차례일 때, 랜덤으로 숫자를 선택하고 선택된 숫자를 표시
		5. 3의 동작 반복 			
		*/
		/*	
		
		
			3. 빙고 판에서의 줄 수 세기
			어떻게 하지 .. 
		*/	 
