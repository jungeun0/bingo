#include <stdio.h>
#include <stdlib.h>
#define N 3

/* 

	������ �����
		1.  N���� �Է¹��� --> ��ȣ ����� �Է� �޾Ƽ� ������ ���� �� Ȱ��
		2.  M���� �Է¹��� --> ��ȣ ����� �Է� �޾Ƽ� �� ���� Ȱ��
		3.  N^N �迭�� ������ �迭 ����, �������� ���� 1~N^2���� ä���ֱ�
			--> �������� ���� ä���ֱ�
		4.  ���� �۾��� �ѹ� �� �ݺ� --> ��ǻ���� ������ ����
		
	���� ���� ����
		1. ������  ���¸� ȭ�鿡 ǥ��
		2. ���ڸ� �����϶�� ����ϰ�, ���߿� ���ڸ� �Է�
		3. �Է¹��� ���ڰ� �迭 �ӿ� �ִٸ�, �����͸� �̿��� -1������ ǥ��
		4. ��ǻ���� ������ ��, �������� ���ڸ� �����ϰ� ���õ� ���ڸ� ǥ��
		5. 3�� ���� �ݺ� 			*/
		
void initate_bingo(int MyBingo[N][N],int NotMyBingo[N][N]){

	make_bingo(MyBingo[N][N]);
	
	make_bingo(NotMyBingo[N][N]);
	
	//�������� �߻��� �������� ����Ʈ�� -->����鼭 �ٷ� ����Ʈ? 
	
	return;
	
	}

int make_bingo(int MyBingo[N][N],int NotMyBingo[N][N]){
		int i, j;
		int C [N^2];
		
		srand((unsigned int)time(NULL));
		
		//
		for (i=0;i<N;i++) {
			for(j=0;j<N;j++){
				MyBingo[i][j] = rand() % (N^2);
				}	
		}

		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
			NotMyBingo[i][j] = rand() % (N^2);
				}	
          }


}	

int main(int argc, char *argv[]) {

	return 0;
}
