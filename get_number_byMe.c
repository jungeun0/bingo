#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2

int get_number_byMe(){
	
	int i;
	C[N*N]; //�ߺ� �����ϴ� �迭 
	
	
	
	
	printf("1~N*N������ ���� �� �ϳ��� �Է��ϼ���.\n");
	while(1)
		{scanf("%d",i); //����ڿ��� ���� ���� 
			if(C[i-1]==0)/*���ڰ� ���õ� ���� ���� ���*/{
				C[i-1]=1;
				break; 
			}
			else if (C[i-1] == 1 || (i<0  && i > (N*N))]){
				printf("�ٽ� �ѹ� �Է��ϼ��� .\n"); 
			}	
		} 
	}
	
	return i;
	
}
