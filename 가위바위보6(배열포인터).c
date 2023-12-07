#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//문자 받기 
void getcha(char *get){
	int i;
	printf("rock, papper, scissors를 입력하세요 : ");
	scanf("%s", &*get);
}
//문자 확인하기 
int check(){
	int b;
	int i;
	char a[8]={};
	getcha(a);
	//문자확인  
	while(1){		
	 	if(a[0]=='r'||a[0]=='p'||a[0]=='s'){
	 		if(a[1]=='o'||a[1]=='a'||a[1]=='c'){
	 			if(a[2]=='c'||a[2]=='p'||a[2]=='i'){
	 				if(a[3]=='k'){
	 					b=2;
						break;
					}
					else if(a[3]=='p'||a[3]=='s'){
	 					if(a[4]=='e'||a[4]=='s'){
	 						if(a[5]=='r'){
	 							b=3;
								break; 
							}
							else if(a[5]=='o'){
								if(a[6]=='r'){
									if(a[7]=='s');{
										b=1;
	 									break; 
									} 
								}
							}
						}
					}
				}
			}
			getcha(a);
		}
	}
	return b;
}
//결과출력  
void result(){
	srand(time(0));
	int a;
	int b;
	int i;
	int w=0;
	int l=0;
	int d=0;
	int num;
	for(i=0;i<5;i++){
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
				d++;
			}
			else if(num==2){
				printf("패배입니다\n");
				l++;
			}
			else if(num==3){
				printf("승리입니다\n");
				w++;
			}
		}
		//바위낼 때 
		else if(b==2){
			if(num==1){
				printf("승리입니다\n");
				w++;
			}
			else if(num==2){
				printf("무승부입니다\n");
				d++;
			}
			else if(num==3){
				printf("패배입니다\n");
				l++;
	
			}
		}
		//보낼  떄  
		else if(b==3){
			if(num==1){
				printf("패배입니다\n");
				l++;
			}
			else if(num==2){
				printf("승리입니다\n");
				w++;
			}
			else if(num==3){
				printf("무승부입니다\n");
				d++;
			}
		}
	}
	printf("%d승 %d 무 %d 패 입니다", w,d,l);
	return ;
}
int main(void) {
	result();
	return 0;
	
}
