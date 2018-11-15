#include <stdio.h>
#include <stdlib.h>
#define N 5 //1-1

int get_number_byCom(){
	int i;
	
	printf("상대방이 번호를 고르고 있습니다 . . . \n");
	while(1){
		i = rand()%(N*N)+1; //난수 생성 
			if (i>0 && i < (N*N)){ // 난수가 범위를 벗어나지 않을 경우 while 빠져나감 
				break;
			}
	}
	
	return i;
}
