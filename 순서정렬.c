#include <stdio.h>
#include <time.h>
int main(void){
	srand(time(0));
	int swap[5];
	int tmp;
	int i,j;
	//배열에 랜덤 숫자넣기. 
	for(i=0;i<5;i++){
		swap[i]=rand() % 5+ 1;
	}
	for(i=0;i<5;i++){
		printf("%d  ", swap[i]);
	}
	printf("\n");

	//삽입정렬하기.(작은값을 찾아 순서정렬하기)
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			if(i!=j){
				if(swap[i]>swap[i+j]){
					tmp=swap[i];
					swap[i]=swap[i+j];
					swap[i+j]=tmp;
				}
			}
		}+
	}
	//선택정렬하기
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			if(i!=j){
				if(swap[i]<swap[i+j]){
					tmp=swap[i];
				}
			}
		}
	}
	
	
	
	 
	for(i;i<5;i++){
		printf("%d  ", swap[i]);
	}
	
	
	
} 
