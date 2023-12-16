package Ex03.Programming;

public class Ex15 {
    public static void main(String[] args) {
        int[][] array = new int[3][5];
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                array[i][j] = 0;
            }
        }
        for (int i = 0; i < 5; i++) {
            int a = (int) (Math.random() * 3);
            int b = (int) (Math.random() * 5);
            array[a][b] = 1;
        }
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }
}
