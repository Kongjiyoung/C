#include <stdio.h>

struct Student{
	int sno;
	char name[20];
	int score;
};

int main(){
	//����ü : ����ڰ� �ʿ信 ���� ����� �ڷ��� 
	//����ü�ڷ��� ����ü�̸�; 
	struct Student s01;
	
	s01.sno =1;
	strcpy(s01.name, "ȫ�浿"); //���ڿ� �����ϴ� �Լ�
	s01.score=100;
	
	printf("��ȣ : %d\n", s01.sno);
	printf("�̸� : %s\n", s01.name);
	printf("���� : %d\n", s01.score);
}
