package Ex03.SelectSort;


public class SelectSort {
    public static void main(String[] args) {
        /**
         * 1. 1회전(4바퀴)
         *
         * 선택 정렬은 첫 번째 자료와 두 번째 자료를, 두 번째 자료와 세 번째 자료를, 세 번째와 네 번째를, … 이런 식으로 (마지막-1)번째 자료와 마지막 자료를 비교하여 교환하면서 자료를 정렬한다.
         *
         * 5, 8, 2, 4, 3
         *
         * (1) 5, 8 비교 (5 순서 ? 저장)
         *
         * (2) 5, 2 비교 (2 순서 ? 저장)
         *
         * (3) 2, 4 비교 (2 순서 ? 저장)
         *
         * (4) 2, 3 비교 (2 순서? 저장)
         */
        int [] sort= {5,8,2,4,3};
        int min=0;

        //1. 가장 작은 숫자 찾기
        for (int i = 0; i < 5; i++) {
            if(min!=i) {
                if (sort[min] > sort[i]) {
                    min = i;
                }
            }
        }
        //2. 작은 숫자 앞에 넣기
        int temp=sort[0];
        sort[0]=sort[min];
        sort[min]=temp;
        //3. 두번째 작은 숫자 찾기
        for (int i = 1; i < 5; i++) {
            if(min!=i) {
                if (sort[min] > sort[i]) {
                    min = i;
                }
            }
        }
        //4. 작은 숫자 앞에 넣기
        temp=sort[1];
        sort[1]=sort[min];
        sort[min]=temp;
        //5. 세번째 작은 숫자 찾기
        for (int i = 2; i < 5; i++) {
            if(min!=i) {
                if (sort[min] > sort[i]) {
                    min = i;
                }
            }
        }
        //6. 작은 숫자 앞에 넣기
        temp=sort[2];
        sort[2]=sort[min];
        sort[min]=temp;
        //7. 네번째 작은 숫자 찾기
        for (int i = 3; i < 5; i++) {
            if(min!=i) {
                if (sort[min] > sort[i]) {
                    min = i;
                }
            }
        }
        //8. 작은 숫자 앞에 넣기
        temp=sort[3];
        sort[3]=sort[min];
        sort[min]=temp;

        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
    }
}
