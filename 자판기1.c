#include <stdio.h>
 
int main(void){
	int money;
	int getice;
	int iceprice[4]={1200,1500,1600,1800};
	int iceinv[4]={5,5,5,5};
	int choice;
	int invchoice;
	int invnumber;
	int changemoney=10000;
	int putchangemoney;
	int i;
	int a=1;
	while(a!=0){
		printf("------------�޴�------------\n");
		printf("1. ���� 2. ��������߰� 3.�ܵ��߰�\n");
		printf("----------------------------\n");
		scanf("%d", &choice);
		if(choice==2) {
			//���ǳֱ�
			printf("��� �߰��� ���̽�ũ�� ��ȣ�� �Է��ϼ��� : ");
			scanf("%d", &invchoice);	
			printf("��� � �����ǰ��� : ");
			scanf("%d", &invnumber);
			iceinv[invchoice-1]+=invnumber;
			for(i=0;i<4;i++){
				printf("%d�� ���̽�ũ�� ��� : %d\n", i+1,iceinv[i]);
			}	
		}
		else if(choice==3){
			//�ܵ��� ��. 
			printf("�ܵ��� �� %d �ֽ��ϴ�\n", changemoney);
			printf("�ܵ��� �󸶳�  �����ǰ��� : ");
			scanf("%d", &putchangemoney);	
			changemoney+=putchangemoney;
			printf("�� �ܵ��� �� %d�� �ֽ��ϴ�\n", changemoney);
		}
		//����	
		else if(choice==1){
			printf("�ݾ����� : ");
			scanf("%d", &money); 
			while(1){
				if(money<1200){
					int change;
					printf("���� %d�� �����մϴ�\n", 1200-money);
					printf("���� �߰��ϼ��� : ");
					scanf("%d", &change);
					money=money+change;
					printf("�� ���� ���� %d�Դϴ�\n", money);				
				}
				else{
					printf("------------�޴�------------\n");
					printf("1. �ٴҶ�� ���̽�ũ�� %d��\n", iceprice[0]);
					if(money>=1500){
						printf("2. ���ڸ� ���̽�ũ�� %d��\n", iceprice[1]);
						if(money>=1600){
							printf("3. ������ ���̽�ũ�� %d��\n", iceprice[2]);
							if(money>=1800){	
								printf("4. ����� ���̽�ũ�� %d��\n", iceprice[3]);
							}
						}
					}
					printf("----------------------------\n");
					scanf("%d", &getice);
					iceinv[getice-1]--;
					break;
				}
			}
			printf("���ǰ� �ܵ� %d���� ���Խ��ϴ�\n", (money-iceprice[getice-1]));
			changemoney+=iceprice[getice-1];
		}
		printf("������ ������ 0�� �Է��ϼ��� : ");
		scanf("%d", &a);
	}
		
} 
