package Ex03.Programming;

public class Ex03 {
    public static void main(String[] args) {
        int[] num = new int[2];


        for (int i = 1; i <= 51; i++) {
            num[0] = i / 10;
            num[1] = i % 10;
            if (num[0] == 3 || num[0] == 6 || num[0] == 9) {
                System.out.print("짝  ");
                if (num[1] == 3 || num[1] == 6 || num[1] == 9) {
                    System.out.print("짝  ");
                }
            } else if (num[1] == 3 || num[1] == 6 || num[1] == 9) {
                System.out.print("짝  ");
            } else {
                System.out.print(i + "  ");
            }
        }

    }
}
