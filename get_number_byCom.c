#include <stdio.h>
#include <stdlib.h>
#define N 5 //1-1

int get_number_byCom(){
	int i;
	
	printf("������ ��ȣ�� ���� �ֽ��ϴ� . . . \n");
	while(1){
		i = rand()%(N*N)+1; //���� ���� 
			if (i>0 && i < (N*N)){ // ������ ������ ����� ���� ��� while �������� 
				break;
			}
	}
	
	return i;
}
