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
		printf("�̱拚���� �ϴ� ����(1), ����(2), ��(3)�� �Է��ϼ��� : ");
		scanf("%d", &j); 
	
	    //�ùٸ� �䳻��  
		/*while(!(j==1||j==2||j==3)){
	    	printf("�ٽ� �Է��ϼ���: ");
	    	scanf("%c\n", &j); 
	    }*/
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
		if(j==1){
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
		else if(j==2){
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
		else if(j==3){
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

	return 0;
}
