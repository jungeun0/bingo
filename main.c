#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2
#include <time.h>
#include "initiate_bingo.h"	
int main(int argc, char *argv[]) {
	
	
	
	int MyBingo[N][N];
	int NotMyBingo[N][N];

	srand((unsigned int)time(NULL));
	
	initiate_bingo(MyBingo);

	initiate_bingo(NotMyBingo);
	
	print_bingo(MyBingo);
	
	//print_bingo(NotMyBingo);
	
	
	
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
