#include <stdio.h> 
#include <string.h>
//�л� ��ȣ �̸� �������� �������� 
//3���� �л������͸� �־��
//�����л��� ������ ���ض�, 3���� �л��� ������ ���ض�.
//+�л��� ������ �迭�� �����ؼ� ������ ���ض�..? 
struct Student{
	int sno;
	char name[20];
	int kor_score;
	int eng_score;
};

int main(void){
	
	//����ü �ʱ�ȭ
	//struct Student s01={ 1, "ȫ�浿", 10, 20};
	 
	/*
	struct  Student s01;
	
	s01.sno=1;
	strcpy(s01.name, "ȫ�浿");
	s01.kor_score=95;
	s01.eng_score=100;
	
	struct Student s02;
	
	s02.sno=2;
	strcpy(s02.name, "�����");
	s02.kor_score=55;
	s02.eng_score=45;
	
	struct Student s03;
	s03.sno=3;
	strcpy(s03.name, "����");
	s03.kor_score=100;
	s03.eng_score=20;
	
	int s1=s01.kor_score+s01.eng_score;
	int s2=s02.kor_score+s02.eng_score;
	int s3=s03.kor_score+s03.eng_score;
	int sum=s1+s2+s3;
	
	printf("%d\n", s1);
	printf("%d\n", s2);
	printf("%d\n", s3);
	printf("���� : %d\n", sum);
	
	int sumarray[6];
	int i,j, sum1;
	sum1=0;
	sumarray[0]=s01.kor_score;
	sumarray[1]=s01.eng_score;
	sumarray[2]=s02.kor_score;
	sumarray[3]=s02.eng_score;
	sumarray[4]=s03.kor_score;
	sumarray[5]=s03.eng_score;
		
	for(i=0; i<6; i++){
		sum1=sum1+sumarray[i];
	}
	printf("%d", sum1);*/
	//����ü �� ��  
	int i,j;
	struct  Student s[3];
	//s[0]=s01;
	//s[1]=s02;
	//s[2]=s02; //������ �ֱ� 
	
	s[0].sno=1;
	strcpy(s[0].name, "ȫ�浿");
	s[0].kor_score=95;
	s[0].eng_score=100;
	

	s[1].sno=2;
	strcpy(s[1].name, "�����");
	s[1].kor_score=55;
	s[1].eng_score=45;
	

	s[2].sno=3;
	strcpy(s[2].name, "����");
	s[2].kor_score=100;
	s[2].eng_score=20;
	
	int sum=0;
	int sumarray1[2][3];
	for(i=0; i<2;i++){
		if(i==0){
			for(j=0;j<3;j++){
				sumarray1[i][j]=s[j].kor_score;
				//printf("%d\n", s[j].kor_score);
			}
		}
		if(i==1){
			for(j=0;j<3;j++){
				sumarray1[i][j]=s[j].eng_score;
				//printf("%d\n", s[j].eng_score);
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\n", sumarray1[i][j]);
			sum =sum+sumarray1[i][j];
		}
	}
	printf("%d\n", sum);
	
	return 0;
} 
