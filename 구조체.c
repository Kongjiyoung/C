#include <stdio.h>

struct Student{
	int sno;
	char name[20];
	int score;
};

int main(){
	//구조체 : 사용자가 필요에 따라 만드는 자료형 
	//구조체자료형 구조체이름; 
	struct Student s01;
	
	s01.sno =1;
	strcpy(s01.name, "홍길동"); //문자열 복사하는 함수
	s01.score=100;
	
	printf("번호 : %d\n", s01.sno);
	printf("이름 : %s\n", s01.name);
	printf("점수 : %d\n", s01.score);
}
