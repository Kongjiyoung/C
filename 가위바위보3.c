#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(){
	srand(time(0));
	int a;
	a = rand() % 3+ 1;
	return a;
}

int main(void) {
	int a;
	int j;
	int num;
	while(1){
		num = random(); 
		printf("이길떄까지 하는 가위(1), 바위(2), 보(3)를 입력하세요 : ");
		scanf("%d", &j); 
	
	    //올바른 답내기  
		/*while(!(j==1||j==2||j==3)){
	    	printf("다시 입력하세요: ");
	    	scanf("%c\n", &j); 
	    }*/
	    //컴퓨터에서 나온  수  
	    if(num==1){
			printf("컴퓨터 : 가위입입니다\n");
		}
		else if(num==2){
			printf("컴퓨터 : 바위입니다\n");
		}
		else if(num==3){
			printf("컴퓨터 : 보입니다\n");
		}
		//가위낼 떄  
		if(j==1){
			if(num==1){
				printf("무승부입니다\n");
			}
			else if(num==2){
				printf("패배입니다\n");
			}
			else if(num==3){
				printf("승리입니다\n");
				break;
			}
		}
		//바위낼 때 
		else if(j==2){
			if(num==1){
				printf("승리입니다\n");
				break;
			}
			else if(num==2){
				printf("무승부입니다\n");
			}
			else if(num==3){
				printf("패배입니다\n");
			}
		}
		//보낼  떄  
		else if(j==3){
			if(num==1){
				printf("패입니다\n");
			}
			else if(num==2){
				printf("승리입니다\n");
				break;
			}
			else if(num==3){
				printf("무승부입니다\n");
			}
		}
	}

	return 0;
}
