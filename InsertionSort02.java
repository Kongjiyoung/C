package Ex03.InsertionSort;

public class InsertionSort02 {
    public static void main(String[] args) {

        int [] sort= {5, 8, 2, 4, 3};
        int j;
        for (int i = 1; i < sort.length; i++) {
            j=1;
            int s=sort[i];
            while(true) {
                if (s < sort[i - j]) {
                    sort[i-j+1] = sort[i - j];
                }else {
                    sort[i-j+1] = s;
                    break;
                }
                if(j==i){
                    sort[i-j]=s;
                    break;
                }
                j++;
            }
        }
        for (int i = 0; i < 5; i++) {
            System.out.print(sort[i]);
        }
        System.out.println();

    }
}
