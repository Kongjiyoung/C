#include <stdio.h> 
#include <string.h>
//학생 번호 이름 국어점수 영어점수 
//3명의 학생데이터를 넣어라
//개별학생의 총점을 구해라, 3명의 학생의 총점을 구해라.
//+학생의 점수를 배열에 저장해서 총점을 구해라..? 
struct Student{
	int sno;
	char name[20];
	int kor_score;
	int eng_score;
};

int main(void){
	
	//구조체 초기화
	//struct Student s01={ 1, "홍길동", 10, 20};
	 
	/*
	struct  Student s01;
	
	s01.sno=1;
	strcpy(s01.name, "홍길동");
	s01.kor_score=95;
	s01.eng_score=100;
	
	struct Student s02;
	
	s02.sno=2;
	strcpy(s02.name, "변사또");
	s02.kor_score=55;
	s02.eng_score=45;
	
	struct Student s03;
	s03.sno=3;
	strcpy(s03.name, "춘향");
	s03.kor_score=100;
	s03.eng_score=20;
	
	int s1=s01.kor_score+s01.eng_score;
	int s2=s02.kor_score+s02.eng_score;
	int s3=s03.kor_score+s03.eng_score;
	int sum=s1+s2+s3;
	
	printf("%d\n", s1);
	printf("%d\n", s2);
	printf("%d\n", s3);
	printf("총점 : %d\n", sum);
	
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
	//구조체 배 열  
	int i,j;
	struct  Student s[3];
	//s[0]=s01;
	//s[1]=s02;
	//s[2]=s02; //위에꺼 넣기 
	
	s[0].sno=1;
	strcpy(s[0].name, "홍길동");
	s[0].kor_score=95;
	s[0].eng_score=100;
	

	s[1].sno=2;
	strcpy(s[1].name, "변사또");
	s[1].kor_score=55;
	s[1].eng_score=45;
	

	s[2].sno=3;
	strcpy(s[2].name, "춘향");
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
