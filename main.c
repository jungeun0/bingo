#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2
#include <time.h>
#include "initiate_bingo.h"	
int main(int argc, char *argv[]) {
	
	int k=0;
	int j=0;
	
	int MyBingo[N][N];
	int NotMyBingo[N][N];
	int MIAOW[N*N] = {0}; //��������� �ϸ� ���ڸ� �Է¹��� �� �ߺ��� ������ �ƴ��� Ȯ���ϴ� �迭 

	srand((unsigned int)time(NULL));
	
	initiate_bingo(MyBingo);

	initiate_bingo(NotMyBingo);
	
	print_bingo(MyBingo);//2-1
	
	//print_bingo(NotMyBingo);
	
	while(1){
		while(1){
			k = get_number_byMe(); //����ڿ��� ���� ���� ������ ���� 
			if(MIAOW[k]==0){ //ó�� �޴� ������ ��� 
				MIAOW[k] = 1;  //������ �޾Ҵٰ� ǥ�� 
				break;
			}
		}
		
		
		}
		
	return 0;	
		
	}
	
	
/* 
		
			2.���� ���� ����
		1. ������  ���¸� ȭ�鿡 ǥ��
		2. ���ڸ� �����϶�� ����ϰ�, ���߿� ���ڸ� �Է�
		3. �Է¹��� ���ڰ� �迭 �ӿ� �ִٸ�, �����͸� �̿��� -1������ ǥ��
		4. ��ǻ���� ������ ��, �������� ���ڸ� �����ϰ� ���õ� ���ڸ� ǥ��
		5. 3�� ���� �ݺ� 			
		*/
