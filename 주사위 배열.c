#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	srand(time(0));
	int count[6]={0,0,0,0,0,0};
	int i,j,a;
	for(i=0;i<100;i++){
		a=rand() % 6+ 1;
		count[a-1]++;
		/* 
		for(j=1;j<7;j++){
			if(a==j){
				count[j-1]++;
			}
		}*/
	}
	for(j=1;j<7;j++){
		printf("´«ÀÌ %d : %d\n", j,count[j-1]);
	}
}
