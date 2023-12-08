#include <stdio.h>

int main(void){
	int a[10];
	int b[5];
	int c[5];
	int i;
	int x=0;
	int y=0;
	for(i=0;i<10;i++){
		a[i]=i+1;
	}
	for(i=0;i<10;i++){
		if(a[i]%2==1){
			b[x]=a[i];
			x++;
		}
		else{
			c[y]=a[i];
			y++;
		}
	}
	for(i=0;i<10;i++){
		printf("a[%d] : %d \n", i,a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("b[%d] : %d \n", i,b[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("c[%d] : %d \n", i,c[i]);
	}
}
