package Ex03.Programming;

public class Ex09 {
    public static void main(String[] args) {
        int[] n = new int[12];
        n[0] = 0;
        n[1] = 1;
        for (int i = 0; i < 10; i++) {
            n[i + 2] = n[i] + n[i + 1];
            System.out.print(n[i] + " ");
        }


    }
}
