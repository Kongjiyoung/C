package Ex03.Programming;

public class Ex08 {
    public static void main(String[] args) {
        int count = 0;
        for (int i = 1; i < 100; i++) {
            for (int j = 1; j < 100; j++) {
                for (int k = 1; k < 100; k++) {
                    if (i * i + j * j == k * k) {
                        System.out.println(i + "  " + j + "  " + k);
                        count++;
                    }
                }
            }
        }
        System.out.println("피타고라스의 정리가 성립하는 직각 삼각형은 총 " + count + "개이다");
    }
}
