#include <stdio.h>
#include <stdlib.h>
#define N 5 //1-1
#define M 3	//1-2
#include <time.h>
#include "initiate_bingo.h"	
#include "get_number_byMe.h"	
#include "process_bingo.h"
#include "get_number_byCom.h"	
		
		
void turn_function(){
	
	int k=0;
	int j=0;
	int n=1;
	int MyBingoNum = 0;
	int ComBingoNum = 0;
	int MyBingo[N][N];
	int ComBingo[N][N];
		
	process_bingo(MyBingo,ComBingo,k);
		
	printf("���� ������ \n");
		
	print_bingo(MyBingo);
		
	printf("������ ������ \n");
		
	print_bingo(ComBingo); 
		
		
	MyBingoNum = count_bingo(MyBingo);
		
	printf("�� ������ �� ���� %d\n",MyBingoNum);
		
	ComBingoNum = count_bingo(ComBingo);
		
	printf("���� ������ �� ���� %d\n",ComBingoNum); 
		
	return;
	}
