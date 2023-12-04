#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void local(void);
//입력받는 문자, 문자확인  
/*//int char j[8];
void getcha(char j[]){
	//char j[8];
	printf("rock, papper, scissors를 입력하세요 : ");
	scanf("%s", j); 
	int i;
	for(i=0; i<7;i++){
		printf("%c", j[i]);
	}
	return ;
}*/
int check(){
	srand(time(0));
	int b;
	int i;
	char j[8];
	//char getcha(j[8]);
	//함수로 변환 
	printf("이길떄까지 하는 rock, papper, scissors를 입력하세요 : ");
	scanf("%s", j); 
	for(i=0; i<7;i++){
		printf("%c", j[i]);
	}
	printf("\n");
	
	//문자확인  
	while(1){
	 	if(j[0]=='r'||j[0]=='p'||j[0]=='s'){
	 		if(j[1]=='o'||j[1]=='a'||j[1]=='c'){
	 			if(j[2]=='c'||j[2]=='p'||j[2]=='i'){
	 				if(j[3]=='k'){
	 					b=2;
						break;
					}
					else if(j[3]=='p'||j[3]=='s'){
	 					if(j[4]=='e'||j[4]=='s'){
	 						if(j[5]=='r'){
	 							b=3;
								break; 
							}
							else if(j[5]=='o'){
								if(j[6]=='r'){
									if(j[7]=='s');{
										b=1;
	 									break; 
									} 
								}
							}
						}
					}
				}
			}
		}
		//배열초기화  
		for(i=0; i<8;i++){
			j[i]=0; 
		}
		printf("다시 입력하세요: ");
    	scanf("%s", j);
    	for(i=0; i<7;i++){
			printf("%c", j[i]);
		} 
		printf("\n");
	}
	return b;
}
//결과출력  
void result(){
	int a;
	int b;
	int num;
	while(1){
		b=check();
		num = rand() % 3+ 1; 
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
		if(b==1){
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
		else if(b==2){
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
		else if(b==3){
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
	return ;
}
int main(void) {
	result();
	return 0;
}
