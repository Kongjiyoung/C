package Ex03.SelectSort;

public class SelectSort01 {
    public static void main(String[] args) {

        int [] sort= {5,8,2,4,3};
        int min=0;

        for (int j = 0; j < 4; j++) {
            for (int i = j; i < 5; i++) {
                if(min!=i) {
                    if (sort[min] > sort[i]) {
                        min = i;
                    }
                }
            }
            int temp=sort[j];
            sort[j]=sort[min];
            sort[min]=temp;
        }

        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
    }
}
