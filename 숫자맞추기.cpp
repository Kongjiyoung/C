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
		printf("���ڸ� �Է��ϼ���: ");
    	scanf("%d", &a); 
    	score=100-10*j;
		if(a==num){
			printf("�����Դϴ�\n");
			printf("%d���Դϴ�", score); 
			break;
		}
		else{
			printf("�����Դϴ�\n");
			if(a>num){
				printf("�Է��� ������ �۽��ϴ�\n");
			}
			else{
				printf("�Է��� ������ Ů�ϴ�\n");
			}
		}
		j++;
		i++;
	}
	
	return 0;
	
}
