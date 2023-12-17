package Ex03.InsertionSort;

public class InsertionSort01 {
    public static void main(String[] args) {
        /**
         * 1. 1회전(1바퀴)
         *
         * 1회전때 두번째위치를 첫번째 위치와 비교하여 작으면 바꿔야함
         *
         * 5, 8, 2, 4, 3
         *
         * (1) 8, 5 비교 (5, 8, 2, 4, 3)
         */
        int [] sort= {5, 8, 2, 4, 3};

        //1회전
        int s=sort[1];
        if(s<sort[0]){
            sort[1]=sort[0];
            sort[0]=s;
        }else {
            sort[1]=s;
        }

        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
        System.out.println();
        /**
         * 2. 2회전(2바퀴)
         *
         * 5, 8, 2, 4, 3
         *
         * (1) 2, 8 비교 (5,  , 8, 4, 3)
         *
         * (2) 2, 5 비교 (  , 5, 8, 4, 3)
         *
         * (2, 5, 8, 4, 3)
         */
        s=sort[2];
        if(s<sort[1]){
            sort[2]=sort[1];
            if(s<sort[0]){
                sort[1]=sort[0];
                sort[0]=s;
            } else{
                sort[1]=s;
            }
        } else{
            sort[2]=s;
        }

        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
        System.out.println();
        /**
         * 3. 3회전
         *
         * 2, 5, 8, 4, 3
         *
         * (1) 4, 8비교 (2, 5,  , 8, 3)
         *
         * (2) 4, 5 비교(2,  , 5, 8, 3)
         *
         * (3) 4, 2 비교(2,  , 5, 8, 3)
         *
         * (2, 4, 5, 8, 3)
         */
        s=sort[3];
        if(s<sort[2]){
            sort[3]=sort[2];
            if(s<sort[1]){
                sort[2]=sort[1];
                if(s<sort[0]){
                    sort[1]=sort[0];
                    sort[0]=s;
                }else{
                    sort[1]=s;
                }
            } else{
                sort[2]=s;
            }
        }else{
            sort[3]=s;
        }

        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
        System.out.println();
        /**
         * 1. 4회전
         *
         * 2, 4, 5, 8, 3
         *
         * (1) 3, 8비교 (2, 4, 5,  , 8)
         *
         * (1) 3, 5비교 (2, 4,  , 5, 8)
         *
         * (1) 3, 4비교 (2,  , 4, 5, 8)
         *
         * (1) 3, 2비교 (2,  , 4, 5, 8)
         *
         * (2, 3, 4, 5, 8)
         */
        s=sort[4];
        if(s<sort[3]){
            sort[4]=sort[3];
            if(s<sort[2]){
                sort[3]=sort[2];
                if(s<sort[1]){
                    sort[2]=sort[1];
                    if(s<sort[0]){
                        sort[1]=sort[0];
                        sort[0]=s;
                    }
                    else{
                        sort[1]=s;
                    }
                }else{
                    sort[2]=s;
                }
            }
            else{
                sort[3]=s;
            }
        }
        else{
            sort[4]=s;
        }

        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
    }
}
