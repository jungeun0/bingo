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
	int MIAOW[N*N] = {0};  //��������� �ϸ� ���ڸ� �Է¹��� �� �ߺ��� ������ �ƴ��� Ȯ���ϴ� �迭 

	srand((unsigned int)time(NULL));
	
	printf("--------------------\n");
	printf("    game start!     \n");
	printf("--------------------\n");

	initiate_bingo(MyBingo);

	initiate_bingo(ComBingo);
	
	printf("���� ������ \n");
		
	print_bingo(MyBingo);
		
	printf("������ ������ \n");
		
	print_bingo(ComBingo); 
		
	
	
	while(1){
		
		printf("%d ��° ���Դϴ�. \n",n); 
		while(1){
			k = get_number_byMe(); //����ڿ��� ���� ���� ������ ���� 
			if(MIAOW[k-1]==0){ //ó�� �޴� ������ ��� 
				MIAOW[k-1] = 1;  //������ �޾Ҵٰ� ǥ�� 
				break;
			}
			else if (MIAOW[k-1] == 1){
				printf("\n�̹� ���õ� ���Դϴ�. �ٸ� ���� �������ּ���.\n");
			} // k-1��° �迭�� �̹� 1�̶��, k�� �̹� ���õ� ���� 
			
		}
		
		process_bingo(MyBingo,ComBingo,k);
		
		printf("\n���� ������ \n");
		
		print_bingo(MyBingo);
		
		printf("\n������ ������ \n");
		
		print_bingo(ComBingo); 
		
		MyBingoNum = count_bingo(MyBingo);
		
		printf("\n�� ������ �� ���� %d\n",MyBingoNum);
		
		ComBingoNum = count_bingo(ComBingo);
		
		printf("\n���� ������ �� ���� %d\n",ComBingoNum); 
	
		
		if (MyBingoNum == M){
			printf("\n�¸��ϼ̽��ϴ� (�õ�Ƚ�� : %d ) !\n",n);
			break;
		}
		else if (ComBingoNum == M){
			printf("\n�й��ϼ̽��ϴ�(�õ�Ƚ�� : %d ) !\n", n );
			break; 
		}
		else if (ComBingoNum == M && MyBingoNum == M){
			printf("\n �����ϴ�(�õ�Ƚ�� : %d ) !\n",n);
			break;
		} 
		
		n++;  //���� �� ��° ������ ���� ���� 
			
			
		printf("������ ��ȣ�� ���� �ֽ��ϴ� . . . \n");
		 
		while(1){
			k = get_number_byCom();
			if(MIAOW[k-1]==0){
				MIAOW[k-1] = 1;
				break;
			}
		}
		
		
		printf("��ǻ�Ͱ� ������ ���� %d \n",k);
		
		process_bingo(MyBingo,ComBingo,k);
		
		printf("\n���� ������ \n");
		
		print_bingo(MyBingo);
		
		printf("\n������ ������ \n");
		
		print_bingo(ComBingo); 
		
		
		MyBingoNum = count_bingo(MyBingo);
		
		printf("\n�� ������ �� ���� %d\n",MyBingoNum);
		
		ComBingoNum = count_bingo(ComBingo);
		
		printf("\n���� ������ �� ���� %d\n",ComBingoNum); 
	
		
		if (MyBingoNum == M){
			printf("\n�¸��ϼ̽��ϴ� (�õ�Ƚ�� : %d ) !\n",n);
			break;
		}
		else if (ComBingoNum == M){
			printf("\n�й��ϼ̽��ϴ�(�õ�Ƚ�� : %d ) !\n", n );
			break; 
		}
		else if (ComBingoNum == M && MyBingoNum == M){
			printf("\n �����ϴ�(�õ�Ƚ�� : %d ) !\n",n);
			break;
		} 
		 
		n++;  //���� �� ��° ������ ���� ����  
		
	
		 
	}
		
	return 0;	
		
	
}
	
