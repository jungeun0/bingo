#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2

int get_number_byMe(){
	
	int i;
	C[N*N]; //중복 방지하는 배열 
	
	
	
	
	printf("1~N*N까지의 숫자 중 하나를 입력하세요.\n");
	while(1)
		{scanf("%d",i); //사용자에게 숫자 받음 
			if(C[i-1]==0)/*숫자가 선택된 적이 없을 경우*/{
				C[i-1]=1;
				break; 
			}
			else if (C[i-1] == 1 || (i<0  && i > (N*N))]){
				printf("다시 한번 입력하세요 .\n"); 
			}	
		} 
	}
	
	return i;
	
}
