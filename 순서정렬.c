#include <stdio.h>
#include <time.h>
int main(void){
	srand(time(0));
	int swap[5];
	int tmp;
	int i,j;
	//�迭�� ���� ���ڳֱ�. 
	for(i=0;i<5;i++){
		swap[i]=rand() % 5+ 1;
	}
	for(i=0;i<5;i++){
		printf("%d  ", swap[i]);
	}
	printf("\n");

	//���������ϱ�.(�������� ã�� ���������ϱ�)
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
	//���������ϱ�
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
