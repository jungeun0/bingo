#include <stdio.h>
#include <stdlib.h>
#define N 3

int initiate_bingo(int MyBingo[N][N],int NotMyBingo[N][N]){
		int i, j;
		int a=0;
		int b;
		int C [N^2];
		
		srand((unsigned int)time(NULL));
		
		//�ߺ����� �ʴ� ���� ����..........! 
		for (i=0;i<N;i++) {
			for(j=0;j<N;j++){
				MyBingo[i][j] = rand() % (N^2);
				C[a] = MyBingo[i][j];
					for(b=a;b>0;b--){
						if(C[a]==C[b]){
							C[a]=0;
							break;
						}
				if(C[a] == 0){
					j--;
					}		
				}	
		}	
		//1-3
		for(i=0;i<N;i++) {
			for(j=0;j<N;j++){
			NotMyBingo[i][j] = rand() % (N^2);
				}	
          }
	return;
		/*1. ������ �����
		1.  N���� �Է¹��� --> ��ȣ ����� �Է� �޾Ƽ� ������ ���� �� Ȱ��
		2.  M���� �Է¹��� --> ��ȣ ����� �Է� �޾Ƽ� �� ���� Ȱ��
		3.  N^N �迭�� ������ �迭 ����, �������� ���� 1~N^2���� ä���ֱ�
			--> �������� ���� ä���ֱ�
		4.  ���� �۾��� �ѹ� �� �ݺ� --> ��ǻ���� ������ ����*/


}	

