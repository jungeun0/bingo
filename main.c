#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2

	/* 
	
	���� ���� ����
		1. ������  ���¸� ȭ�鿡 ǥ��
		2. ���ڸ� �����϶�� ����ϰ�, ���߿� ���ڸ� �Է�
		3. �Է¹��� ���ڰ� �迭 �ӿ� �ִٸ�, �����͸� �̿��� -1������ ǥ��
		4. ��ǻ���� ������ ��, �������� ���ڸ� �����ϰ� ���õ� ���ڸ� ǥ��
		5. 3�� ���� �ݺ� 			*/
		
int main(int argc, char *argv[]) {
	
	
	int MyBingo[N][N];
	int NotMyBingo[N][N];
	
	
	initiate_bingo(MyBingo[N][N]);
	
	initiate_bingo(NotMyBingo[N][N]);
	
	





	return 0;
}
