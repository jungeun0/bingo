#include <stdio.h>
#include <stdlib.h>
#define N 5 //1-1
#define M 3	//1-2

int get_number_byMe(){
	
	int i;
	
	printf("\n1~(%d * %d)������ ���� �� �ϳ��� �Է��ϼ���.\n",N,N);
	while(1)
	{
		scanf("%d",&i);
							
							//����ڿ��� ���� ���� 
			if(i<0){
				printf("���� ���� ���ڸ� �Է��� �ּ���. \n");
			}
			else if( i > (N*N)){
				printf("���� ���� ���ڸ� �Է��� �ּ���. \n");
			}
			else {
				break;		//���� ���� ������ ��� while �������� 
			}		
	}	 
	 
	
	return i;
	
}
