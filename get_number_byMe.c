#include <stdio.h>
#include <stdlib.h>
#define N 3 //1-1
#define M 3	//1-2

int get_number_byMe(){
	
	int i;
	

	
	printf("\n1~N*N까지의 숫자 중 하나를 입력하세요.\n");
	while(1)
	{
		scanf("%d",&i);
							
							//사용자에게 숫자 받음 
			if( i<0){
				printf("범위 내의 숫자를 입력해 주세요. \n");
			}
			else if( i > (N*N)){
				printf("범위 내의 숫자를 입력해 주세요. \n");
			}
			else {
				break;		//범위 내의 숫자인 경우 while 빠져나감 
			}		
	}	 
	 
	
	return i;
	
}
