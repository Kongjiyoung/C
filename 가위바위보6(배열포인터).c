#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���� �ޱ� 
void getcha(char *get){
	int i;
	printf("rock, papper, scissors�� �Է��ϼ��� : ");
	scanf("%s", &*get);
}
//���� Ȯ���ϱ� 
int check(){
	int b;
	int i;
	char a[8]={};
	getcha(a);
	//����Ȯ��  
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
//������  
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
				d++;
			}
			else if(num==2){
				printf("�й��Դϴ�\n");
				l++;
			}
			else if(num==3){
				printf("�¸��Դϴ�\n");
				w++;
			}
		}
		//������ �� 
		else if(b==2){
			if(num==1){
				printf("�¸��Դϴ�\n");
				w++;
			}
			else if(num==2){
				printf("���º��Դϴ�\n");
				d++;
			}
			else if(num==3){
				printf("�й��Դϴ�\n");
				l++;
	
			}
		}
		//����  ��  
		else if(b==3){
			if(num==1){
				printf("�й��Դϴ�\n");
				l++;
			}
			else if(num==2){
				printf("�¸��Դϴ�\n");
				w++;
			}
			else if(num==3){
				printf("���º��Դϴ�\n");
				d++;
			}
		}
	}
	printf("%d�� %d �� %d �� �Դϴ�", w,d,l);
	return ;
}
int main(void) {
	result();
	return 0;
	
}
