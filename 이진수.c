#include <stdio.h>
#include <stdlib.h>
void two(int num){
	int i;
	int nums[8];
	for(i=0; i<8; i++){
		nums[i]=0;
	}
	for(i=0; i<8; i++){
		nums[i]=num%2;
		num=num/2;
	}
	for(i=7; i>=0; i--){
		printf("%d",  nums[i]);
	}
} 
void eight(int num){
	int h, t, o;
	h=num/64;
	t=(num%64)/8;
	o=(num%64)%8;
	printf("%d%d%d", h,t,o);
}
void sixteen(int num){
	int six[3];
	int i;
	six[0]=num/256;
	six[1]=(num%64)/16;
	six[2]=(num%64)%16;
	for(i=0; i<3; i++){
		if(six[i]==10){
			printf("A");
		}
		else if(six[i]==11){
			printf("B");
		}
		else if(six[i]==12){
			printf("C");
		}
		else if(six[i]==13){
			printf("D");
		}
		else if(six[i]==14){
			printf("E");
		}
		else if(six[i]==15){
			printf("F");
		}
		else{
			printf("%d", six[i]);
		}
	}
}
 
int main(void){
	int a;
	printf("10진수 입력 : ");
	scanf("%d", &a);
	printf("\n");
	
	printf("2진수 값 : ");
	two(a);
	printf("\n8진수 값 : ");
	eight(a);
	printf("\n16진수 값 : ");
	sixteen(a);
}

