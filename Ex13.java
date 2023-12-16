package Ex03.Programming;

public class Ex13 {
    public static void main(String[] args) {
        String[] card = {"Clubs", "Diamonds", "Hearts", "Spades"};
        String[] number = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
        for (int i = 0; i < 5; i++) {
            int a = (int) (Math.random() * 4);
            int b = (int) (Math.random() * 13);
            System.out.println(card[a] + "의 " + number[b]);
        }
    }
}
