#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
	int i=0;
	int j=0;
	int num;
	int a;
	int score;
 	num = rand() % 10+ 1;
	while(i<5){
		printf("숫자를 입력하세요: ");
    	scanf("%d", &a); 
    	score=100-10*j;
		if(a==num){
			printf("정답입니다\n");
			printf("%d점입니다", score); 
			break;
		}
		else{
			printf("오답입니다\n");
			if(a>num){
				printf("입력한 값보다 작습니다\n");
			}
			else{
				printf("입력한 값보다 큽니다\n");
			}
		}
		j++;
		i++;
	}
	
	return 0;
	
}
