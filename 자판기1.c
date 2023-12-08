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
		printf("------------메뉴------------\n");
		printf("1. 구입 2. 물건재고추가 3.잔돈추가\n");
		printf("----------------------------\n");
		scanf("%d", &choice);
		if(choice==2) {
			//물건넣기
			printf("재고 추가할 아이스크림 번호를 입력하세요 : ");
			scanf("%d", &invchoice);	
			printf("재고를 몇개 넣을건가요 : ");
			scanf("%d", &invnumber);
			iceinv[invchoice-1]+=invnumber;
			for(i=0;i<4;i++){
				printf("%d번 아이스크림 재고 : %d\n", i+1,iceinv[i]);
			}	
		}
		else if(choice==3){
			//잔돈넣 기. 
			printf("잔돈은 총 %d 있습니다\n", changemoney);
			printf("잔돈을 얼마나  넣을건가요 : ");
			scanf("%d", &putchangemoney);	
			changemoney+=putchangemoney;
			printf("총 잔돈은 총 %d원 있습니다\n", changemoney);
		}
		//구입	
		else if(choice==1){
			printf("금액투입 : ");
			scanf("%d", &money); 
			while(1){
				if(money<1200){
					int change;
					printf("돈이 %d가 부족합니다\n", 1200-money);
					printf("돈을 추가하세요 : ");
					scanf("%d", &change);
					money=money+change;
					printf("총 넣은 돈은 %d입니다\n", money);				
				}
				else{
					printf("------------메뉴------------\n");
					printf("1. 바닐라맛 아이스크림 %d원\n", iceprice[0]);
					if(money>=1500){
						printf("2. 초코맛 아이스크림 %d원\n", iceprice[1]);
						if(money>=1600){
							printf("3. 녹차맛 아이스크림 %d원\n", iceprice[2]);
							if(money>=1800){	
								printf("4. 딸기맛 아이스크림 %d원\n", iceprice[3]);
							}
						}
					}
					printf("----------------------------\n");
					scanf("%d", &getice);
					iceinv[getice-1]--;
					break;
				}
			}
			printf("물건과 잔돈 %d원이 나왔습니다\n", (money-iceprice[getice-1]));
			changemoney+=iceprice[getice-1];
		}
		printf("끝내고 싶으면 0을 입력하세요 : ");
		scanf("%d", &a);
	}
		
} 
