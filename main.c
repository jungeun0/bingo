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

	print_bingo(MyBingo);
	// ������ �ʱ�ȭ�� �ʿ� !  -->�ذ� 
	
	initiate_bingo(NotMyBingo);
	
	print_bingo(NotMyBingo);

	return 0;
}
/* 
			1. ������ �����
		1.  N���� �Է¹��� --> ��ȣ ����� �Է� �޾Ƽ� ������ ���� �� Ȱ��
		2.  M���� �Է¹��� --> ��ȣ ����� �Է� �޾Ƽ� �� ���� Ȱ��
		3.  N^N �迭�� ������ �迭 ����, �������� ���� 1~N^2���� ä���ֱ�
			--> �������� ���� ä���ֱ�
		4.  ���� �۾��� �ѹ� �� �ݺ� --> ��ǻ���� ������ ����
		
			2.���� ���� ����
		1. ������  ���¸� ȭ�鿡 ǥ��
		2. ���ڸ� �����϶�� ����ϰ�, ���߿� ���ڸ� �Է�
		3. �Է¹��� ���ڰ� �迭 �ӿ� �ִٸ�, �����͸� �̿��� -1������ ǥ��
		4. ��ǻ���� ������ ��, �������� ���ڸ� �����ϰ� ���õ� ���ڸ� ǥ��
		5. 3�� ���� �ݺ� 			
		*/
