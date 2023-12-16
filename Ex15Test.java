package Ex03.Programming;

public class Ex15Test {
    public static void main(String[] args) {
        int[][] array = new int[3][5];
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                array[i][j] = 0;
            }
        }
        for (int k = 0; k < 5; k++) {
            while(true){
                int a = (int) (Math.random() * 3);
                int b = (int) (Math.random() * 5);

                if (array[a][b]!=1){
                    array[a][b]=1;
                    break;
                }
            }
        }
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }
}
