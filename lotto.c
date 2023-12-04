#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
	int nums[6];
	int i, j;
	for(i=0;i<6;i++){
		nums[i]=rand() % 45+ 1;	
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(nums[i]==nums[j]){
				if(i!=j){
				nums[i]=rand() % 45+ 1;
				i=0;
				j=0;
				}
			}
		}
	}
	for(i=0;i<6;i++){
		printf("로또번호 %d번: %d\n", i+1, nums[i]);
	}
}
