#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void local(void);
//�Է¹޴� ����, ����Ȯ��  
/*//int char j[8];
void getcha(char j[]){
	//char j[8];
	printf("rock, papper, scissors�� �Է��ϼ��� : ");
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
	//�Լ��� ��ȯ 
	printf("�̱拚���� �ϴ� rock, papper, scissors�� �Է��ϼ��� : ");
	scanf("%s", j); 
	for(i=0; i<7;i++){
		printf("%c", j[i]);
	}
	printf("\n");
	
	//����Ȯ��  
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
		//�迭�ʱ�ȭ  
		for(i=0; i<8;i++){
			j[i]=0; 
		}
		printf("�ٽ� �Է��ϼ���: ");
    	scanf("%s", j);
    	for(i=0; i<7;i++){
			printf("%c", j[i]);
		} 
		printf("\n");
	}
	return b;
}
//������  
void result(){
	int a;
	int b;
	int num;
	while(1){
		b=check();
		num = rand() % 3+ 1; 
	    //��ǻ�Ϳ��� ����  ��  
	   	if(num==1){
			printf("��ǻ�� : �������Դϴ�\n");
		}
		else if(num==2){
			printf("��ǻ�� : �����Դϴ�\n");
		}
		else if(num==3){
			printf("��ǻ�� : ���Դϴ�\n");
		}
		//������ ��  
		if(b==1){
			if(num==1){
				printf("���º��Դϴ�\n");
			}
			else if(num==2){
				printf("�й��Դϴ�\n");
			}
			else if(num==3){
				printf("�¸��Դϴ�\n");
				break;
			}
		}
		//������ �� 
		else if(b==2){
			if(num==1){
				printf("�¸��Դϴ�\n");
				break;
			}
			else if(num==2){
				printf("���º��Դϴ�\n");
			}
			else if(num==3){
				printf("�й��Դϴ�\n");
	
			}
		}
		//����  ��  
		else if(b==3){
			if(num==1){
				printf("���Դϴ�\n");
			}
			else if(num==2){
				printf("�¸��Դϴ�\n");
				break;
			}
			else if(num==3){
				printf("���º��Դϴ�\n");
			}
		}
	}
	return ;
}
int main(void) {
	result();
	return 0;
}
