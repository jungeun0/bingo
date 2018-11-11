#include <stdio.h>
#include <stdlib.h>
#include "Input_N.h"
#define N Input_N()

/* 

	빙고판 만들기
		1.  N값을 입력받음 --> 기호 상수로 입력 받아서 빙고판 만들 때 활용
		2.  M값을 입력받음 --> 기호 상수로 입력 받아서 줄 수로 활용
		3.  N^N 배열의 이차원 배열 생성, 랜덤으로 숫자 1~N^2까지 채워넣기
			--> 랜덤으로 수를 채워넣기, if함수로 겹치는 숫자가 있을 경우 다시 랜덤 돌리기
		4.  같은 작업을 한번 더 반복 --> 컴퓨터의 빙고판 생성
		
	빙고 게임 시작
		1. 빙고판  상태를 화면에 표시
		2. 숫자를 선택하라고 출력하고, 나중에 숫자를 입력
		3. 입력받은 숫자가 배열 속에 있다면, 포인터를 이용해 -1값으로 표시
		4. 컴퓨터의 차례일 때, 랜덤으로 숫자를 선택하고 선택된 숫자를 표시
		5. 3의 동작 반복 			*/
		
		


/* run this program using the console pauser or add your own getch, system("pause") or input loop */






int main(int argc, char *argv[]) {


	printf("%d", N);
	

	
	
	
	
	return 0;
}
