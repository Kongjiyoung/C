package Ex03.Programming;

public class Ex10 {
    public static void main(String[] args) {
        double[] n = {1.0, 2.0, 3.0, 4.0};
        double max1 = 0;
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            if (n[i] > n[i + 1]) {
                max1 = n[i];
            } else {
                max1 = n[i + 1];
            }
        }
        for (int i = 0; i < 4; i++) {
            sum = sum + n[i];
            System.out.print(n[i] + " ");
        }
        System.out.println();
        System.out.println("합은 " + sum);
        System.out.println("최대값은 " + max1);
    }
}
